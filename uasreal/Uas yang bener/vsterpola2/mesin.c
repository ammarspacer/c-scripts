//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//													                                                                                                        //	                              -                 	    																								     //
//							||			  ||	||					||      	 ||			 ||	  ||	||||||	 ||   	||					  ||			//
//							 ||			  ||	||				||     ||	     ||			 ||	  ||	||	||	 ||		||	    ||	||	||    ||   		  	//
//				|||||||||||||||			||||	||	         ||||||||||||||||||||||        ||||	  ||	||||||	 ||		||    ||||||||||||||||||			//
//				||	||	||				||		||		     ||		 	   ||	||		   ||	  ||  		||	 ||		||	  || 		   ||				//
//				||				 	  ||		||		    ||				||||		  ||  	  || 		||	 ||		||	  ||							//
//				||					 |||		||		 |||							|||		  ||		||||||||||||||	  ||				 			//
//																																							//
//																																							//
//																																							//
//											     	 CODING BY : Muhammad Faris Muzakki 1606923 		   													//
//														    		ILMU KOMPUTER 2016																		//
//																																							//
//                                              	Saya Muhammad Faris Muzakki Mengerjakan UAS ALPRO   		     										//
//                                     	      dalam matakuliah Algoritma untuk keberkahannya maka saya tidak 												//
//										   	   melakukan kecurangan seperti yang telah dispesifikan. Aamiin				 									//
//	                                        																							     				//
//											                                													    						//
//		   											       																									//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "header.h"

//variabel global untuk menentukan jumlah vokal
int vokal1 = 0;
int vokal2 = 0;


//fungsi untuk menentukan jumlah vokal array of string ke 1
int jumlah1(int n, char arr1[n][50]){
	//variabel iterasi
	int i, j;

	//menentukan banyakya huruf vokal
	for (i=0; i<n; i++){
		//cek per kata
		for (j=0; j<strlen(arr1[i]); j++){
			//jika karakter array baris ke i kolom ke j adalah huruf vokal, maka iterasi vokal 1 akan bertambah
			if ((arr1[i][j] == 'a') || (arr1[i][j] == 'i') || (arr1[i][j] == 'u') || (arr1[i][j] == 'e') || (arr1[i][j] == 'o')){
				vokal1++;
			}
		}
	}
return;
}


//fungsi untuk menentukan jumlah vokal array of string ke 2
int jumlah2(int m, char arr2[m][50]){
	//variabel iterasi
	int i, j;

	//menentukan banyakya huruf vokal
	for (i=0; i<m; i++){
		//cek per kata
		for (j=0; j<strlen(arr2[i]); j++){
			//jika karakter array baris ke i kolom ke j adalah huruf vokal, maka iterasi vokal 2 akan bertambah
			if ((arr2[i][j] == 'a') || (arr2[i][j] == 'i') || (arr2[i][j] == 'u') || (arr2[i][j] == 'e') || (arr2[i][j] == 'o')){
				vokal2++;
			}
		}
	}
return;
}



//prosedur print pola
void print(int n, int m, char arr1[n][50], char arr2[m][50]){
	//variabel iterasi
	int i,j,w,maxk,spasi,max2;

	//menentukan jumlah looping pusat
	if (n > m){
		maxk = n;
	}else{
		maxk = m;
	}


	//pola jika vokal array ke 1 lebih banyak dari vokal array ke 2
	if (vokal1 > vokal2){


		for (i=0; i<maxk; i++){
			//variabel untuk membuat batas spasi
			spasi = 0;

			//menentukan batas looping for sekunder
			if (strlen(arr1[i]) > strlen(arr2[i])){
				max2 = strlen(arr1[i]);
			}else{
				max2 = strlen(arr2[i]);
			}

			//pembuatan pola
			for (j=0; j<max2; j++){
				//pembuatan spasi
				if ((i < n) || (i < m)){
					for (w=0; w<spasi; w++){
						printf(" ");
					}
				}
				//penambahan iterasi spasi
				spasi++;
				
				//logika agar tidak bocor
				//kemungkinan ke 1 untuk char ke 1 (ada spasi didepan)
				if((i < n) && (i < m)){
					if ((strlen(arr1[i]) > j) && (strlen(arr2[i]) > j)){
						printf("%c ",arr1[i][j]);
					}
				}
				//kemungkinan ke 2 untuk char ke 1 (tidak ada spasi didepan)
				if ((i < n) && (i < m)){
					if ((strlen(arr1[i]) > j) && (strlen(arr2[i]) <= j)){
						printf("%c",arr1[i][j]);
					}
				}
				//kemungkinan ke 3 untuk char ke 1 (tidak ada spasi didepan)
				if ((i < n) && (i >= m)){
					if (strlen(arr1[i]) > j){
						printf("%c",arr1[i][j]);
					}
				}





				//kemungkinan ke 1 untuk char ke 2 (tidak ada spasi didepan)
				if ((i < m) && (i < n)){
					if ((strlen(arr2[i]) > j) && (strlen(arr1[i]) > j)){
						printf("%c",arr2[i][j]);
					}
				}
				//kemungkinan ke 2 untuk char ke 2 (ada 2 spasi dibelakang)
				if ((i < m) && (i < n)){
					if ((strlen(arr2[i]) > j) && (strlen(arr1[i]) <= j)){
						printf("  %c",arr2[i][j]);
					}
				}
				//kemungkinan ke 3 untuk char ke 2 (tidak ada spasi didepan)
				if ((i < m) && (i >= n)){
					if (strlen(arr2[i]) > j){
						printf("%c",arr2[i][j]);
					}
				}


				//print enter sesuai pola
				printf("\n");
			}

		}

	}




	//pola jika vokal array ke 2 lebih banyak dari vokal array ke 1
	if (vokal1 < vokal2){


		for (i=0; i<maxk; i++){
			//variabel untuk membuat batas spasi
			spasi = 0;

			//menentukan batas looping for sekunder
			if (strlen(arr1[i]) > strlen(arr2[i])){
				max2 = strlen(arr1[i]);
			}else{
				max2 = strlen(arr2[i]);
			}

			//pembuatan pola
			for (j=0; j<max2; j++){
				//pembuatan spasi
				if ((i < n) || (i < m)){
					for (w=0; w<spasi; w++){
						printf(" ");
					}
				}
				//penambahan iterasi spasi
				spasi++;
				

				//logika agar tidak bocor
				//kemungkinan ke 1 untuk char ke 1 (ada spasi didepan)
				if((i < m) && (i < n)){
					if ((strlen(arr2[i]) > j) && (strlen(arr1[i]) > j)){
						printf("%c ",arr2[i][j]);
					}
				}
				//kemungkinan ke 2 untuk char ke 1 (tidak ada spasi didepan)
				if ((i < m) && (i < n)){
					if ((strlen(arr2[i]) > j) && (strlen(arr1[i]) <= j)){
						printf("%c",arr2[i][j]);
					}
				}
				//kemungkinan ke 3 untuk char ke 1 (tidak ada spasi didepan)
				if ((i < m) && (i >= n)){
					if (strlen(arr2[i]) > j){
						printf("%c",arr2[i][j]);
					}
				}


				//kemungkinan ke 1 untuk char ke 2 (ada spasi didepan)
				if ((i < n) && (i < m)){
					if ((strlen(arr1[i]) > j) && (strlen(arr2[i]) > j)){
						printf("%c",arr1[i][j]);
					}
				}
				//kemungkinan ke 2 untuk char ke 2 (ada 2 spasi dibelakang)
				if ((i < n) && (i < m)){
					if ((strlen(arr1[i]) > j) && (strlen(arr2[i]) <= j)){
						printf("  %c",arr1[i][j]);
					}
				}
				//kemungkinan ke 3 untuk char ke 2 (tidak ada spasi didepan)
				if ((i < n) && (i >= m)){
					if (strlen(arr1[i]) > j){
						printf("%c",arr1[i][j]);
					}
				}

				//print enter sesuai pola
				printf("\n");

			}
		}

	}




}
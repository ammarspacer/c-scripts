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
//                                              Saya Muhammad Faris Muzakki Mengerjakan evaluasi praktikum 2	       										//
//                                     	      dalam matakuliah Algoritma untuk keberkahannya maka saya tidak 												//
//										   	   melakukan kecurangan seperti yang telah dispesifikan. Aamiin				 									//
//	                                        																							     				//
//											                                													    						//
//		   											       																									//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "header.h"

//variabel global untuk menampung seluruh inputan kalimat ke 1
char input1[1000];
//variabel global untuk menampung seluruh inputan kalimat ke 2
char input2[1000];

//prosedur untuk memindahkan inputan ke 1 ke string global
void input_1(int kalimat1, char arr1[kalimat1][50]){
	//variabel iteraSI
	int i;
	int j;
	int x=0;

	//memindahkan inputan ke array penampung
	for (i=0; i<kalimat1; i++){
		for (j=0; j<strlen(arr1[i]); j++){
			input1[x] = arr1[i][j];
			x++;
		}
	}
}

//prosedur untuk memindahkan inputan ke 2 ke string global
void input_2(int kalimat2, char arr2[kalimat2][50]){

	//variabel iterasi
	int i;
	int j;
	int x=0;

	//memindahkan inputan ke array penampung
	for (i=0; i<kalimat2; i++){
		for (j=0; j<strlen(arr2[i]); j++){
			input2[x] = arr2[i][j];
			x++;
		}
	}
}

//prosedur untuk cek apakah kalimat 1 anagram dengan kalimat ke 2
void cek(int kalimat1, char arr1[kalimat1][50],int kalimat2, char arr2[kalimat2][50]){
	//prosedur rekrusif
	input_1(kalimat1,arr1);
	input_2(kalimat2,arr2);
	//variabel iterasi
	int i;
	int j;
	int x=0;
	
	//variabel untuk menampung nilai ASCII
	int satu=0;
	int dua=0;


	//for penampungan nilai ASCII kalimat ke 1
	for (i=0; i<strlen(input1); i++){
		satu = satu + input1[i];
	}

	//for penampungan nilai ASCII kalimat ke 2
	for (i=0; i<strlen(input2); i++){
		dua = dua + input2[i];
	}

	//Jika jumlah ASCII kalimat ke 1 sama dengan jumlah ASCII kalimat kedua maka output adalah "beanar" 
	//atau nilai ASCII kaliamat ke 1 lebih besar dari nilai ASCII kalimat ke 2
	//yang menandakan bahwa kalimat 1 anagram dengan kalimat ke 2 
	if ((satu == dua) || (satu >= dua)){
		printf("benar\n");
	}else{
	//jika hasil selain kemungkinan diatas, maka output tidak anagram
		printf("salah\n");
	}


}
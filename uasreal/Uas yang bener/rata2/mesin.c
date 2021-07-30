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

//fungsi rata2 array ke 1
int rata1(int n, int arr1[n]){
	//variabel iterasi
	int i;
	//penampung jumlah
	int jumlah = 0;

	//menjumlahkan seluruh array
	for (i=0; i<n; i++){
		jumlah = jumlah + arr1[i];
	}


	//merata2kan array
	jumlah = jumlah / n;

return jumlah;
}


//fungsi rata2 array ke 2
int rata2(int m, int arr2[m]){
	//variabel iterasi
	int i;
	//penampung jumlah
	int jumlah = 0;

	//menjumlahkan seluruh array
	for (i=0; i<m; i++){
		jumlah = jumlah + arr2[i];
	}


	//merata2kan array
	jumlah = jumlah / m;

return jumlah;
}


//menentukan rata2 terbesar
int hasil(int angka1, int angka2){
	//rata2 terbesar
	int taraaa;

	//jika rata2 array ke 1 lebih besar daripada rata2 ke 2 maka "taraa = rata2 array ke 1"
	if (angka1 > angka2){
		taraaa = angka1;
	//jika rata2 array ke 2 lebih besar daripada rata2 ke 1 maka "taraa = rata2 array ke 2"
	}else{
		taraaa = angka2;
	}



return taraaa;
}








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
int main (){

	//variebl iterasi
	int i;
	//variabel penapung banyakya inputan array ke 1 dan ke 2
	int n,m;



	//scanf banyaknya inut array ke 1
	scanf("%d",&n);
	//array of string penampung inputan
	char arr1[n][50];
	//input masukan
	for (i=0; i<n; i++){
		scanf("%s",&arr1[i]);
	}


	//scanf banyaknya inut array ke 2
	scanf("%d",&m);
	//array of string penampung inputan
	char arr2[m][50];
	//input masukan
	for (i=0; i<m; i++){
		scanf("%s",&arr2[i]);
	}




	//pemanggilan fungsi untuk menghitung jumlah huruf vokal array ke 1
	jumlah1(n,arr1);
	//pemanggilan fungsi untuk menghitung jumlah huruf vokal array ke 2
	jumlah2(m,arr2);
	//pemanggilan prosedur untuk membuat pola
	print(n,m,arr1,arr2);





	return 0;
}
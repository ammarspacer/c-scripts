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
int main (){
	//variabel iterasi
	int i;
	//variabel untuk menginput banyaknya input
	int banyak;
	//variabel untuk menginput banyakya kata pada kalimat ke 1
	int kalimat1;
	//variabel untuk menginput banyakya kata pada kalimat ke 2
	int kalimat2;

	//scanf banyaknya input
	scanf("%d",&banyak);
	//scanf banyaknya input kalimat ke 1
	scanf("%d",&kalimat1);
	char arr1[kalimat1][50];
	//scanf banyaknya input kalimat ke 2
	scanf("%d",&kalimat2);
	char arr2[kalimat2][50];

	//scanf input kalimat ke 1
	for (i=0; i<kalimat1; i++){
		scanf("%s",&arr1[i]);
	}


	//scanf input kalimat ke 2
	for (i=0; i<kalimat2; i++){
		scanf("%s",&arr2[i]);
	}


	//pemanggilan prosedur untuk masukan input1 ke prosedur
	input_1(kalimat1,arr1);
	//pemanggilan prosedur untuk masukan input2 ke prosedur
	input_2(kalimat2,arr2);

	//prosedur untuk cek hasil
	cek(kalimat1,arr1,kalimat2,arr2);



	return 0;
}
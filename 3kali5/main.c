//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//													                                                                                                        //	                                               	    																								     //
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
//                                              Saya Muhammad Faris Muzakki Mengerjakan QUIZ 3				        										//
//                                     	      dalam matakuliah Algoritma untuk keberkahannya maka saya tidak 												//
//										   	   melakukan kecurangan seperti yang telah dispesifikan. Aamiin				 									//
//	                                        																							     				//
//											                                													    						//
//		   											       																									//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "header.h"

int main (){

	//variabel untuk menampung banyaknya inputan
	int banyak;
	//variabel untuk iterasi
	int i;
	//variabel penampung banyaknya angka kelipatan3
	int banyak3=0;
	//variabel penampung banyaknya angka kelipatan3
	int banyak5=0;
	//variabel penampung hasil jumlah kali bilangan
	int hasill=0;



	//meminta banyaknya inputan
	scanf("%d",&banyak);
	//membuat array untuk input sebanyak variabel 'banyak'
	int input[banyak];

	//input angka
	for (i=0; i<banyak; i++){
		scanf("%d",&input[i]);
	}

	//pemindahan hasil fungsi ke variabel
	banyak3 = angkakel3(banyak,input);
	//pemindahan hasil fungsi ke variabel
	banyak5 = angkakel5(banyak,input);


	//menapung hasil fungsi
	hasill = hasil(banyak3,banyak5);

	//print hasil pengkalian
	printf("%d\n",hasill);



	return 0;
}
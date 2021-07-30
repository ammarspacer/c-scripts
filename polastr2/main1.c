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
#include "mesin1.c"
int main (){

	//variabel untuk iterasi
	int i;
	//variabel untuk meanpung berapa banyak input
	int banyak;


	//meminta banyaknya inputan
	scanf("%d",&banyak);
	//membuat array 2 dimensi untuk meanpung string sejumlah variebl 'banyak'
	char input[banyak][50];


	//meminta input string sejumlah banyak
	for (i=0; i<banyak; i++){
		scanf("%s",&input[i]);
	}



	pola(banyak,input);



	return 0;
}
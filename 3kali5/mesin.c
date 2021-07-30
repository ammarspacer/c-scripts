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

//fungsi untuk menghitung banyaknya angka kelipatan 3
int angkakel3(int banyak, int input[banyak]){
	//variabel untuk iterasi
	int i;
	//variabel untuk menampung banyaknya kelipatan angka 3
	int tiga=0;
	for (i=0; i<banyak; i++){
		if (input[i] % 3 == 0){
			//variabel 3 bertambah jika angka ke i kelipatan 3
			tiga++;
		}
	}
	//pelemparan hasil
	return tiga;
}

//fungsi untuk menghitung banyaknya angka kelipatan 5
int angkakel5(int banyak, int input[banyak]){
	//variabel untuk iterasi
	int i;
	//variabel untuk menampung banyaknya angka kelipatan 5
	int lima=0;
	for (i=0; i<banyak; i++){
		if (input[i] % 5 == 0){
			//variabel 5 bertambah jika angka ke i kelipatan 5
			lima++;
		}
	}
	//pelemparan hasil
	return lima;
}

//fungsi menghitung perkalian jumlah kelipatan 3 dan 5
int hasil(int banyak3, int banyak5){
	int hasil1 = 0;
	hasil1 = banyak3 * banyak5;

	return hasil1;
}



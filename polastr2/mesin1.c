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
#include "header1.h"


void pola(int banyak, char input[banyak][50]){
	//variebl iterasi
	int i,j,w;

	//print pola
	for (i=0; i<banyak; i++){
		//pola jika strlen ganjil
		if (strlen(input[i]) %2 != 0){
			//print pola per char
			for (j=0; j<strlen(input[i]); j+=2){

				//logika agar di akhir char tidak ada spasi
				if (j != strlen(input[i]) - 1){
					printf("%c ",input[i][j]);
				}
				else{
					printf("%c",input[i][j]);
				}
			}
		}

		//pola jika strlen genap
		if (strlen(input[i]) %2 == 0){
			//print pola per char
			for (j=0; j<strlen(input[i]); j+=2){

				//logika agar di akhir char tidak ada spasi
				if (j != strlen(input[i]) - 2){
					printf("%c ",input[i][j]);
				}
				else{
					printf("%c",input[i][j]);
				
				}
			}
		}


		//untuk membuat baris baru
		printf("\n");

		
		//print pola per char
		if (strlen(input[i]) % 2 != 0){
			for (j=1; j<strlen(input[i]); j+=2){
				
				//logika agar di akhir char tidak ada spasi
				if (j != strlen(input[i]) - 1){
					printf(" %c",input[i][j]);
				}
				else {
					printf("%c",input[i][j]);
				
				}
			}
		}	

		if (strlen(input[i]) % 2 == 0){
			for (j=1; j<strlen(input[i])+1; j+=2){
				
				//logika agar di akhir char tidak ada spasi
				if (j != strlen(input[i])){
					printf(" %c",input[i][j]);
				}
				else {
					printf("%c",input[i][j]);
				
				}
			}
		}

			//untuk membuat baris baru
			printf("\n");	
		

	}
}




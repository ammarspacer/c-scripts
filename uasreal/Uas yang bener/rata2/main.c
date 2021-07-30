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
	//variabel untuk iterasi
	int i;
	//variabel untuk menampung banyaknya masukan
	int n,m;


	//banyaknya inputan ke 1
	scanf("%d",&n);
	//penampung input ke 1
	int arr1[n];
	//memasukan input ke 1
	for (i=0; i<n; i++){
		//memasukan input
		scanf("%d",&arr1[i]);
	}


	//banyaknya inputan ke 2
	scanf("%d",&m);
	//penampung input ke 2
	int arr2[m];
	//memasukan input ke 2
	for (i=0; i<m; i++){
		//memasukan input
		scanf("%d",&arr2[i]);
	}


	//variabel pennampung fungsi ke 1
	int penampung1 = rata1(n,arr1);
	//variabel pennampung fungsi ke 2
	int penampung2 = rata2(m,arr2);

	//mengeuarkan hasil	
	printf("%d\n",hasil(penampung1,penampung2));


	return 0;
}
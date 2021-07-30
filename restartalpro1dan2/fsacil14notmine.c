//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//													                                                                                                        //			                                                  	    										//
//							||				  ||	||					||      	 ||			 ||	  ||	||||||	 ||   	||					  ||		//
//							 ||				  ||	||				||     ||	     ||			 ||	  ||	||	||	 ||		||	    ||	||	||    ||     	//
//				|||||||||||||||				||||	||	         ||||||||||||||||||||||        ||||	  ||	||||||	 ||		||    ||||||||||||||||||		//
//				||	||	||					||		||		     ||		 	   ||	||		   ||	  ||  		||	 ||		||	  || 		   ||			//
//				||						   ||		||		    ||				||||		  ||  	  || 		||	 ||		||	  ||						//
//				||						 |||		||		 |||							|||		  ||		||||||||||||||	  ||						//
//																																							//
//																																							//
//																																							//
//											     	 CODING BY : Muhammad Faris Muzakki 1606923 		   													//
//														    		ILMU KOMPUTER 2016																		//
//																																							//
//                                                                          																				//
//                                           															 													//
//										   																 													//
//	                                        																							     				//
//											                                													    						//
//		   											       																									//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
		
	
#include<stdio.h>
int main (){
			
			
			
			
		float aa, bb, cc ; 	
		int   dd, ee, ff,
			  depan1, depan2, depan3,
			  belakang1, belakang2, belakang3 ;
			
		char qq, ww, rr ;	
		scanf("%f %f %f %d %d %d", &aa, &bb, &cc, &dd, &ee, &ff);
		

		depan1 = aa;
		depan2 = bb;
		depan3 = cc;
		
			aa = aa + 0.001 ;
			bb = bb + 0.001 ;
			cc = cc + 0.001 ;
		
	 belakang1 = ( aa - depan1 )*100;
	 belakang2 = ( bb - depan2 )*100;
	 belakang3 = ( cc - depan3 )*100;

			
			
		if   ((depan1 % dd == 0) && (belakang1 % dd == 0) || (depan1 % ee == 0) && (belakang1 % ee == 0) || (depan1 % ff == 0) && (belakang1 % ff == 0))
		     {qq = 1;}
		else {qq = 0;}
		
		if   ((depan2 % dd == 0) && (belakang2 % dd == 0) || (depan2 % ee == 0) && (belakang2 % ee == 0) || (depan2 % ff == 0) && (belakang2 % ff == 0))
		     {ww = 1;}
		else {ww = 0;}
		
		if   ((depan3 % dd == 0) && (belakang3 % dd == 0) || (depan3 % ee == 0) && (belakang3 % ee == 0) || (depan3 % ff == 0) && (belakang3 % ff == 0))
		     {rr = 1;}
		else {rr = 0;}

		
			
		if      (qq + ww + rr >= 2 )
				{printf("valid\n");}
		else    {printf("tidak valid\n");}
		
		
		
	return 0;
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			

	
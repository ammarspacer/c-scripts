#include <stdio.h>
/*

 ****   ************			-|
  ****  *******  ****			 |- Pola 1
   **** ******    ****			-|
   **********      ********		 	-|- Pola 2
   **********      ********			-|
  **** *******    ****			-|
 ****  ********  ****			 |- Pola 2
****   *************			-|

*/


int main(){
	int j,i,n; //variabel baris, kolom, bintang
	scanf("%d",&n); //input bintang dari user
	
	for(i = 0; i < (n-1); i++){
		for(j = 0; j < n; j++){
			printf(" ");
		}
		for(j = n; j > i; j--){
			printf("*");
		}
		for(j = 0; j < i; j++){
			printf("*");
		}
		for(j = n; j >(i+1); j--){
			printf(" ");
		}
		for(j = 0; j < n; j++){
			printf(" ");
		}
		
		
		
		
		
	}
	
}
#include <stdio.h>

int main(){
	int n;
	
	scanf("%d", &n);
	
	int i,j;
	
	for(i=1;i<n*2+1;i++){
		
		for(j=0;j<i;j++){
			printf("*");
		}
		for(j=(n*2)-1;j>=i;j--){
			printf(" ");
		}
		for(j=(n*2)-1;j>=i;j--){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("*");
		}
		for(j=1;j<i;j++){
			printf("*");
		}
		for(j=(n*2)-1;j>=i;j--){
			printf(" ");
		}
		for(j=(n*2)-1;j>=i;j--){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
		
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" ");
		}
		for(j=0;j<n;j++){
			printf(" ");
		}
		for(j=0;j<1;j++){
			printf(" ");
		}
		for(j=0;j<n;j++){
			printf("*");
		}
		for(j=0;j<n;j++){
			printf("*");
		}
		for(j=0;j<n;j++){
			printf("*");
		}
		for(j=0;j<n-3;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=3;j<n;j++){
			printf(" ");
		}
		for(j=0;j<n;j++){
			printf(" ");
		}
		for(j=0;j<n;j++){
			printf(" ");
		}
		for(j=0;j<1;j++){
			printf(" ");
		}
		for(j=0;j<n;j++){
			printf(" ");
		}
		for(j=0;j<n;j++){
			printf(" ");
		}
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=n;j>i;j--){
			printf("*");
		}
		
		
		printf("\n");
	}
	
	
	
	return 0;
}




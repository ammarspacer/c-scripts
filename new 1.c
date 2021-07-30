#include <stdio.h>

int main(){
	int n; 
	int angka;
	
	scanf("%d", &angka);
	scanf("%d", &n);
	
	int i;
	int j;
	
	if(angka == 0){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("_")
		}
		for(j=0;j<n;j++){
			printf("*")
		}
		for(j=0;j<n;j++){
			printf("_")
		}
		printf("\n");
	}
}
	
	
	
	
	return 0;
}
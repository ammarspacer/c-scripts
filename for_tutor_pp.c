#include <stdio.h>


int main(){
	int a,b,c,d,e,f;
	
	printf("panjang pp = ");
	scanf("%d", &n);
	printf("lebar pp = ");
	scanf("%d", &m);
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j+=1){
			printf("*");
		}
		
		printf("\n");
	}
}
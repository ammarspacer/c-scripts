#include <stdio.h>


int main(){
	int n;
	scanf("%d", &n);
	int tabInt[n];
	int i;
	for(i=0; i < n; i++){
		scanf("%d", &tabInt[i]);
	}
	
	int jumlah = 0;
	
	for(i=0; i < (n/2); i++){
		printf("%d ", tabInt[i]);
	}
	
	
	return 0;
}
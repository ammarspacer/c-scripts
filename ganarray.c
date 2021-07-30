#include <stdio.h>

int main(){
	int n;
	int i;
	
	scanf("%d", &n);
	int tabInt[n];
	
	for(i = 0;i < n;i++){
		scanf("%d", &tabInt[i]);
	}
	
	for(i = 0;i < n;i++){
		if(tabInt[i] % 2 == 1){
			jumlah++;
		}
	}
	
	printf("banyak bilangan ganjil %d", jumlah);
	return 0;
}
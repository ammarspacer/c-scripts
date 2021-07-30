#include <stdio.h>

int main(){
	int n;
	int i;
	
	scanf("%d", &n);
	int tabInt[n];
	
	for(i = 0;i < n;i++){
		scanf("%d", &tabInt[i]);
	}
	
	int ganjil[16];
	int genap[16];
	
	int counter_ganjil = 0;
	int counter_genap = 0;
	
	for(i = 0;i < n;i++){
		if(tabInt[i] % 2 == 0){
			genap[counter_genap] = tabInt[i];
			counter_genap++;
		}else{
			ganjil[counter_ganjil] = tabInt[i];
			counter_ganjil++;
		}
	}
	
	printf("GANJIL======\n");
	for(i = 0; i < counter_ganjil;i++){
		printf("%d\n",ganjil[i]);
	}
	
	printf("GENAP======\n");
	for(i = 0; i < counter_genap;i++){
		printf("%d\n",genap[i]);
	}
	
	return 0;
}
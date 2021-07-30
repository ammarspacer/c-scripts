#include <stdio.h>


int main(){
	int n;
	scanf("%d", &n);
	
	int arr[n];
	
	int i;
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	int ganjil[16];
	int genap[16];
	
	int counter_ganjil = 0;
	int counter_genap = 0;
	
	for(i = 0; i < n; i++){
		if(arr[i] % 2 == 0){
			genap[counter_genap] = arr[i];
			counter_genap++;
		}else{
			ganjil[counter_ganjil] = arr[i];
			counter_ganjil++
		}
		
	}
	
	printf("Ganjil------------------- \n"){
		for(i = 0;i < counter_ganjil; i++){
			printf("%d\n", ganjil[i]);
		}
	}
	
	printf("Ganjil------------------- \n"){
		for(i = 0;i < counter_genap; i++){
			printf("%d\n", genap[i]);
		}
	}
	
	
	
	return 0;
}
#include <stdio.h>

int main(){
	int angka[5];
	int i;
	for(i=0;i<6;i++){
		scanf("%d", &angka[i]);
	}
	
	int ganjil[3];
	int genap[3];
	
	int j=0;
	
	for(i=0;i<6;i++){
		if(angka[i] % 2 == 0){
			genap[j] = angka[i];
			j++;
		}else{
			ganjil[j] = angka[i];
			j++;
		}
		
	}
	
	for(j=0;j<3;j++){
		printf("%d\n", genap[j]);
	}
	
	
	
	return 0;
}
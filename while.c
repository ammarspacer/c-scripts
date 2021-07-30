#include <stdio.h>

int main(){
	int penghitung;
	int tabInt[5];
	int ketemu;
	int sampai;
	
	for(penghitung=0;penghitung<5;penghitung++){
		printf("masukkan angka:\n");
		scanf("%d", &tabInt[penghitung]);
		printf("\n");
	}
	
	ketemu = 0;
	
	penghitung = 0;
	
	sampai = 0;
	
	while((ketemu < 3) && (penghitung < 5)){
		if((tabInt[penghitung] % 2 == 0)){
			ketemu = 1;
			printf("%d\n", tabInt[penghitung]);
		}
		penghitung++;
	}
	
	return 0;
}
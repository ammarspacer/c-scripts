#include <stdio.h>

int main(){
	int baris;
	int kolom;
	int n;
	scanf("%d", &n);
	for(baris=0;baris<=n;baris++){
		for(kolom=1;kolom<=baris;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=(n-baris);kolom++){
			printf("_");
		}
		for(kolom=1;kolom<=(n-baris);kolom++){
			printf("_");
		}
		for(kolom=1;kolom<=baris;kolom++){
			printf("*");
		}
		printf("\n");
	}
	for(baris=0;baris<=n;baris++){
		for(kolom=1;kolom<=baris;kolom++){
			printf("_");
		}
		for(kolom=1;kolom<=(n-baris);kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=(n-baris);kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=baris;kolom++){
			printf("_");
		}
		printf("\n");
	}
	return 0;
}
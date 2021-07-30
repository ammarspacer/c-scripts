#include <stdio.h>
int main(){
	int baris;
	int kolom;
	int bintang;
	printf("Masukkan jumlah bintang  yang kau ingin kau lihat\n");
	scanf("%d", &bintang);
	for(baris=1; baris<=bintang;
	baris++){
		for(kolom=1; kolom<=baris;kolom++){
		printf("*");
		}	
	printf("\n");
	}
	return 0;
}
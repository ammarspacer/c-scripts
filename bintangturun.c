#include <stdio.h>
int main(){
	int baris;
	int kolom1;
	int kolom2;
	int kolom3;
	int bintang;
	printf("Masukkan jumlah bintang  yang kau ingin kau lihat\n");
	scanf("%d", &bintang);
	for(baris=0; baris<=bintang;
	baris++){
		for(kolom2=0; kolom2<baris;kolom2++){
			printf("_");
		}for(kolom1=bintang; kolom1>baris;kolom1--){
			printf("*");
		}for(kolom3=bintang; kolom3<baris;kolom3++){
			printf("*");
		}			
	printf("\n");
	}
	return 0;
}
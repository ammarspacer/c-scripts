#include <stdio.h>
typedef struct{
	int pembilang;
	int penyebut;
}pecahan;

int main(){
	pecahan p1;
	pecahan p2, p3;
	
	printf("Masukkan pembilang dan penyebut pecahan pertama:\n");
	scanf("%d %d", &p1.pembilang, &p1.penyebut);
	
	printf("Masukkan pembilang dan penyebut pecahan kedua:\n");
	scanf("%d %d", &p2.pembilang, &p3.penyebut);
	
	p3.pembilang = p1.pembilang * p2.pembilang;
	p3.penyebut = p1.penyebut * p2.penyebut;
	printf("hasil perkalian pembilang adalah %d dan perkalian penyebut adalah %d\n", p3.pembilang, p3.penyebut);
	
	
	return 0;
}
#include <stdio.h>
typedef struct{
	int x;
	int y;
}titik;

int main (){
	titik p1;
	
	printf("Masukkan nilai koordinat x:\n");
	scanf("%d", &p1.x);
	printf("Masukkan nilai koordinat y:\n");
	scanf("%d", &p1.y);
	
	printf("titik yang Anda masukkan:\n");
	printf("x: %d\n", p1.x);
	printf("x: %d\n", p1.y);
	printf("berhasil berhasil hore\n");
	return 0;
}
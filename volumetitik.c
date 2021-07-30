/* buatlah bungkusan balok yang berisi panjang, lebar, dan
tinggi, luaspermukaan, dan volume. Mintalah masukan dari user untuk mengisi panjang, lebar, tinggi 
kemudian hitung luas permuakaan dan volume dari balok. */
#include <stdio.h>
typedef struct{
	int p;
	int l;
	int t;
	int lp;
	int V;
}titik;


int main(){
	titik balok;
	printf("Masukkan ukuran\n");
	printf("Masukkan panjang\n");
	scanf("%d", &balok.p);
	printf("Masukkan lebar\n");
	scanf("%d", &balok.l);
	printf("Masukkan lebar\n");
	scanf("%d", &balok.t);
	
	balok.lp = (2*((balok.p*balok.l) + (balok.p*balok.t) + (balok.l*balok.t)));
	balok.V = (balok.p*balok.l*balok.t);
	
	printf("Luas permukaan: %d\n", balok.lp);
	printf("Volume: %d\n", balok.V);
	
	
	return 0;
}
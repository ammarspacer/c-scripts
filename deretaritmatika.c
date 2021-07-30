#include <stdio.h>


int main(){
	int berapa_kali;int hasil_jumlah;int penghitung;
	hasil_jumlah = 0;
	printf("Masukkan angka berapa kali akan diulang:\n");
	scanf("%d", &berapa_kali);
	printf("\n");
	for (penghitung = 1;penghitung<=berapa_kali ; penghitung++){
		hasil_jumlah = hasil_jumlah + penghitung;
	}
	printf("%d\n", hasil_jumlah);
	return 0;
}
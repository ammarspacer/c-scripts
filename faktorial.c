#include <stdio.h>


int main(){
	int berapa_kali;int hasil_kali;int penghitung;
	hasil_kali = 1;
	printf("Masukkan angka berapa kali akan diulang:\n");
	scanf("%d", &berapa_kali);
	if(berapa_kali >= 32){
		printf("not valid\n"); 
	}
	printf("\n");
	for (penghitung = 1;penghitung<=berapa_kali ; penghitung++){
		hasil_kali = hasil_kali * penghitung;
	}
	printf("%d\n", hasil_kali);
	return 0;
}
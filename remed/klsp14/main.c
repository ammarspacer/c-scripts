#include "head.h"
/*Saya [AMMAR ASHSHIDDIQI] mengerjakan evaluasi [REMEDIAL] dalam mata kuliah 
[ALGORITMA DAN PEMROGRAMAN 1] untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int n; //variabel jumlah inputan
	
	scanf("%d", &n); //meminta jumlah inputan
	
	int angka[50]; //var isi inputan
	int i; //iterasi untuk scan
	for(i=0;i<n;i++){
		scanf("%d", &angka[i]); //meminta user memasukkan isi baris
	}
	
	olah(n,angka); //proses pengolahan
	
	
	
	
	return 0;
}


//Jangan lupa bahagia :D
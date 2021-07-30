#include "head.h"
#include <string.h>

int main(){
	int n; //variabel jumlah inputan angka
	
	scanf("%d", &n); //meminta jumlah inputan angka
	
	int angka[50]; //array  of int
	
	int i; //iterasi untuk scan
	
	for(i=0;i<n;i++){
		scanf("%d", &angka[i]); //meminta isi array of int
	}
	
	int m; //variabel jumlah inputan string
	
	scanf("%d", &m); //variabel jum
	
	char allay[m][50];
	
	for(i=0;i<m;i++){
		scanf("%s", &allay[i]);
	}
	
	for(i=0;i<n;i++){
		printf("%d\n", angka[i]);
	}	
	
	for(i=0;i<m;i++){
		printf("%s\n", allay[i]);
	}
	
	return 0;
}

/*Saya [AMMAR ASHSHIDDIQI] mengerjakan evaluasi [REMEDIAL] dalam mata kuliah 
[ALGORITMA DAN PEMROGRAMAN 1] untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/

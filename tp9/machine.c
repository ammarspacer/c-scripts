#include "header.h"
#include <string.h>

void genap(int n, char tempat_penyimpanan_kata[50], char pesan[n]){
	int i;
		if(n % 2 == 0){
		for(i=0;i<n;i++){
			strcpy(tempat_penyimpanan_kata, pesan[2*i+1]);
			strcpy(pesan[2*i+1], pesan[2*i+2]);
			strcpy(pesan[2*i+2],tempat_penyimpanan_kata);
			printf("%s  %s\n", tempat_penyimpanan_kata, pesan[i]);
		}
		
	} 
}

void ganjil(int n, char tempat_penyimpanan_kata[50], char pesan[n]){
	int i;
		if(n % 2 != 0){
		for(i=0;i<n;i++){
			printf("%s  %s\n", tempat_penyimpanan_kata, pesan[i]);
		}
		
	} 
}

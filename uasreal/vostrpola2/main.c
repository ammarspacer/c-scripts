#include <stdio.h>
#include <string.h>
//														Saya [AMMAR ASHSHIDDIQI] Mengerjakan [UAS]	       										//
//                                     	dalam matakuliah [ALGORITMA DAN PEMROGRAMAN 1] untuk keberkahannya maka saya tidak 												//
//										   	   melakukan kecurangan seperti yang telah dispesifikan. Aamiin		

int i,j;

int main(){
	
	int n1; //variabel jumlah kata array of string 1
	
	scanf("%d", &n1); //meminta masukan jumlah kata array of string 1
	
	char char_n1[n1][50]; //array of string 1
	
	for(i=0;i<n1;i++){
		scanf("%s", &char_n1[i]); //meminta masukan konten array of string 1
	}
		
	int n2; //variabel jumlah kata array of string 2
	
	scanf("%d", &n2); //meminta masukan jumlah kata array of string 2
	
	char char_n2[n2][50]; //array of string 2
	
	for(j=0;j<n2;j++){
		scanf("%s", &char_n2[i]); //meminta masukan konten array of string 2
	}

	for(i=0;i<n1;i++){
		printf("%s\n", &char_n1[i]); //mengecek arrstring 1
	}
	
	for(j=0;j<n2;j++){
		printf("%s\n", &char_n1[j]); ////mengecek arrstring 2
	}
	
	
	return 0;
}


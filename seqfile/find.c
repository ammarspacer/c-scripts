#include <stdio.h>
#include <string.h>

typedef struct{
	char nim[10];
	char nama[100];
	char nilai[2];
}nilaiMatkul;

int main(){
	nilaiMatkul rekaman;
	FILE *arsipMatKul;
	arsipMatKul = fopen("ArsipMatKul.dat", "r");
	char kata_cari[10];
	printf("masukkan nim orang yang anda cintai :  \n");
	scanf("%s", &kata_cari);
	
	fscanf(arsipMatKul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
	
	if(strcmp(rekaman.nim, "XXXXXX") == 0){
		printf("arsip kosong\n");
	}else{
		if(strcmp(kata_cari, "XXXXXX") == 0){
			printf("arsip kosong\n");
		}else{
			while((strcmp(rekaman.nim, "XXXXXX") != 0) && (strcmp(rekaman.nim, kata_cari) != 0)){
				fscanf(arsipMatKul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
			}
			
		}
		
		if(strcmp(rekaman.nim,kata_cari) == 0){
			printf("Orang Terganteng di Dunia adalah : \n");
			printf("nim : %s\n", rekaman.nim);
			printf("nama: %s\n", rekaman.nama);
			printf("Tingkat kegantengan: %s\n", rekaman.nilai);
			printf("------------------------\n");
		}else{
			printf("cinta anda tidak ditemukan\n");
		}
	}
	
	fclose(arsipMatKul);
	
	return 0;
}
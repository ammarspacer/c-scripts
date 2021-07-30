#include "head.h"

int main(int argc, char const *argv[]){
	int i = 0, j;
	int max_length[3] = {0,0,0};
	int length;
	int pilihan;
	char pilihan2[100];
	mahasiswa alpro;
	
	do{
		system("cls");
		readFile();
		
		getMaxLength(max_length);
		length = max_length[0] + max_length[1] + max_length[2] + 10;
		
		for(j=0;j<length;j++){
			printf("-");
		}
		printf("\n");
		printf("| NIM");
		for(i=0;i<max_length[0] - strlen("NIM"); i++){
			printf(" ");
		}
		printf(" | Nama ");
		for(i=0;i<max_length[1] - strlen("Nama"); i++){
			printf(" ");
		}
		printf(" | Kelas ");
		for(i=0;i<max_length[2] - strlen("Kelas"); i++){
			printf(" ");
		}
		printf("|\n");
		
		for(j = 0;j<length;j++){
			printf("-");
		}
		printf("\n");
		
		for(i=0;i<n;i++){
			printf("| %s", data[i].nim);
			for(j=0;j< max_length[0] - strlen(data[i].nim);j++){
				printf(" ");
			}
			printf(" | %s", data[i].nama);
			for(j=0;j< max_length[1] - strlen(data[i].nama);j++){
				printf(" ");
			}
			printf(" | %s", data[i].kelas);
			for(j=0;j< max_length[2] - strlen(data[i].kelas);j++){
				printf(" ");
			}
			printf(" |\n");
		}
		
		for(j=0;j<length;j++){
			printf("-");
		}
		printf("\n\n");
		
		printf("Silahkan Masukan Pilihan Anda!\n");
		printf("\n");
		printf("-----Pilihan-----\n");
		printf("|");
		for(i=0;i<strlen(data[i].nama) - 3;i++){
			printf(" ");
		}
		printf("1. Cari Data     |\n");
		printf("|");
		for(i=0;i<strlen(data[i].nama) - 3;i++){
			printf(" ");
		}
		printf("2. Tambah Data     |\n");
		printf("|");
		for(i=0;i<strlen(data[i].nama) - 3;i++){
			printf(" ");
		}
		printf("3. Update Data     |\n");
		printf("|");
		for(i=0;i<strlen(data[i].nama) - 3;i++){
			printf(" ");
		}
		printf("4. Delete Data     |\n");
		printf("|");
		for(i=0;i<strlen(data[i].nama) - 3;i++){
			printf(" ");
		}
		printf("5. Exit     |\n");
		printf("-------------------\n");
		printf("\n");
		
		scanf("%d", &pilihan);
		
		if(pilihan == 1){
			printf("Masukan NIM : ");
			scanf("%s", alpro.nim);
			if(findData(alpro.nim) == 1){
				printf("Data Ditemukan\n");
			}else{
				printf("Data tidak ditemukan\n");
			}
		}
		
		else if(pilihan == 2){
			printf("Masukkan NIM : ");
			scanf("%s", alpro.nim);
			printf("Masukkan Nama : ");
			scanf("%s", alpro.nama);
			printf("Masukkan Kelas : ");
			scanf("%s", alpro.kelas);
			insertData(alpro);
		}
		
		else if(pilihan == 3){
			printf("Masukkan NIM : ");
			scanf("%s", alpro.nim);
			updateData(alpro.nim);
		}
		
		else if(pilihan == 4){
			printf("Masukkan NIM : ");
			scanf("%s", alpro.nim);
			deleteData(alpro.nim);
		}
		
		else if(pilihan != 5){
			printf("Menu yang dipilih tidak ada.\n");
		}
		
		printf("Apakah anda ingin keluar?");
		printf("ya/tidak\n");
		scanf("%s", pilihan2);
	}while(strcmp(pilihan2,"ya") != 0);
	
	system("cls");
	return 0;
}

#include "head.h"

void readFile(){
	n = 0;
	mahasiswa tmp;
	FILE *fdata;
	
	fdata = fopen("mahasiswa.txt", "r");
	
	do{
		fscanf(fdata, "%s %s %s", tmp.nim, tmp.nama, tmp.kelas);
		if(strcmp(tmp.nim, "XX") != 0 && strcmp(tmp.nama, "XX") != 0
		&& strcmp(tmp.kelas, "XX") != 0){
			data[n] = tmp;
			n++;
		}
	}while(strcmp(tmp.nim, "XX") != 0 && strcmp(tmp.nama, "XX") != 0
		&& strcmp(tmp.kelas, "XX") != 0);
	//menutup file
	fclose(fdata);
}

void getMaxLength(int max_length[3]){
	int i = 0;
	int temp_length;
	
	max_length[0] = strlen("NIM");
	max_length[1] = strlen("Nama");
	max_length[2] = strlen("Kelas");
	
	while(i<n){
		temp_length = strlen(data[i].nim);
		if(temp_length > max_length[0]){
			max_length[0] = temp_length;
		}
		
		temp_length = strlen(data[i].nama);
		if(temp_length > max_length[1]){
			max_length[1] = temp_length;
		}

		temp_length = strlen(data[i].kelas);
		if(temp_length > max_length[2]){
			max_length[2] = temp_length;
		}	
		
		i++;
	}	
}

void writeFile(){
	int i;
	FILE *fdata;
	
	fdata = fopen("mahasiswa.txt", "w");
	//proses penulisan file
	for(i=0;i<n;i++){
		fprintf(fdata, "%s %s %s", data[i].nim, data[i].nama, data[i].kelas);
	}
	
	fprintf(fdata, "XX XX XX\n");
	
	fclose(fdata);
}

int findData(char nim[15]){
	int status = 0;
	int i = 0;
	
	readFile();
	
	while(status == 0 && i<n){
		if(strcmp(data[i].nim, nim) == 0){
			status = 1;
		}else{
			i++;
		}
	}
	return status;
}

void insertData(mahasiswa masukan){
	int status = findData(masukan.nim);
	if(status == 0){
		data[n] = masukan;
		n++;
		writeFile();
		printf("Data berhasil ditambahkan\n");
	}else{
		//jika nim ganda, tidak bisa memasukkan data baru
		printf("NIM sudah terdafar, data gagal ditambahkan\n");
	}
}

void deleteData(char nim[15]){
	readFile();
	int i, j;
	int status  = 0;
	i = 0;
	char hapus[10];
	
	while(i < n && status == 0){
		if(strcmp(data[i].nim,nim) == 0){
			status = 1;
			printf("Data ditemukan. Yakin hapus data pacarmu?");
			printf("ya/tidak\n");
			printf("notes: anda akan menyesal bila anda sudah melihat pacar anda sebagai mantan\n");
			scanf("%s", hapus);
			
			if(strcmp(hapus,"ya") == 0){
				for(j=i;j<n;j++){
					data[j] = data[j+1];
				}
				n--;
				writeFile();
			}
		}else{
			i++;
		}
	}
	
	if(status == 0){
		printf("Data pacar anda tidak ditemukan\n");
	}
}

void updateData(char nim[15]){
	readFile();
	int i;
	int status = 0;
	
	i = 0;
	char nama[25], kelas[15];
	while(i<n && status == 0){
		if(strcmp(data[i].nim, nim) == 0){
			status = 1;
			printf("Data ditemukan\n");
			printf("--Data Awal--\n");
			printf("Nama : %s\n", data[i].nama);
			printf("Kelas : %s\n", data[i].kelas);
			printf("--------------\n");
			printf("Masukkan nama baru: \n");
			scanf("%s", kelas);
			strcpy(data[i].nama, nama);
			strcpy(data[i].kelas, kelas);
			printf("Data berhasil diupdate\n");
			writeFile();
		}else{
			i++;
		}
	}
	if(status == 0){
		printf("Data tidak ditemukan\n");
	}
}
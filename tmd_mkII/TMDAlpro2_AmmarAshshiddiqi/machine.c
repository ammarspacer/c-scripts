#include "head.h"

//prosedur wait
void wait(float x) {
time_t start;
time_t current;
time(&start);
do
time(&current);
while (difftime(current,start) < x);
}






/*typedef struct{
	int x;
	int y;
	char kota[50];
}tkota;*/
//menjalankan prosedur membaca file kota
void readfiletkota(){
	nkota=0;
	tkota tmpkota;
	FILE *TKOTA;
	TKOTA = fopen("tkota.txt", "r");
	
	do{
		fscanf(TKOTA,"%d %d %s", &tmpkota.x, &tmpkota.y,tmpkota.kota);
		if((tmpkota.x != -1) && (tmpkota.y != -1) && 
		(strcmp(tmpkota.kota,"##") != 0)){
			datakota[nkota] = tmpkota;
			nkota = nkota+1;
		} 
	}while((tmpkota.x != -1) && (tmpkota.y != -1) && 
		(strcmp(tmpkota.kota,"##") != 0));
	
	fclose(TKOTA);
}

//menjalankan prosedur memasukkan data ke file kota
void writefiletkota(){
	int i;
	
	FILE *TKOTA;
	TKOTA = fopen("tkota.txt", "w");
	
	for(i=0;i<nkota;i++){
		fprintf(TKOTA, "%d %d %s\n", datakota[i].x, datakota[i].y, datakota[i].kota);
	}
	
	fprintf(TKOTA, "-1 -1 ##\n");
	
	fclose(TKOTA);
}

/*typedef struct{
	int nomorJalur;
	char kota1[50];
	char kota2[50];
}tjalur;*/

//menjalankan prosedur membaca file jalur
void readfiletjalur(){
	njalur=0;
	tjalur tmpjalur;
	FILE *TJALUR;
	TJALUR = fopen("tjalur.txt", "r");
	
	do{
		fscanf(TJALUR,"%d %s %s", &tmpjalur.nomorJalur, tmpjalur.kota1,tmpjalur.kota2);
		if((tmpjalur.nomorJalur != -1) && (strcmp(tmpjalur.kota1,"##") != 0) && 
		(strcmp(tmpjalur.kota2,"##") != 0)){
			datajalur[njalur] = tmpjalur;
			njalur = njalur+1;
		} 
	}while(((tmpjalur.nomorJalur != -1) && (strcmp(tmpjalur.kota1,"##") != 0) && 
		(strcmp(tmpjalur.kota2,"##") != 0)));
	
	fclose(TJALUR);
}

//menjalankan prosedur menulis file jalur
void writefiletjalur(){
	int i;
	
	FILE *TJALUR;
	TJALUR = fopen("tjalur.txt", "w");
	
	for(i=0;i<njalur;i++){
		fprintf(TJALUR, "%d %s %s\n", datajalur[i].nomorJalur, datajalur[i].kota1, datajalur[i].kota2);
	}
	
	fprintf(TJALUR, "-1 ## ##\n");
	
	fclose(TJALUR);
}


//menjalankan prosedur menghapus konten jalur
void deletefiletjalur(int nomorJalur,char kota1[],char kota2[]){
	readfiletjalur();
	
	int i,j;
	int status = 0;
	i=0;
	
	char hapusjalur[20];
	
	while(i< njalur && status == 0){
		if((strcmp(datajalur[i].kota1,kota1) == 0) && (strcmp(datajalur[i].kota2,kota2) == 0) 
			&& (datajalur[i].nomorJalur == nomorJalur)){
			status = 1;
			printf("Data kota mantan anda ditemukan!. Apakah anda ingin menghapus kenangan kota ini?\n");
			printf("ya/tidak\n");
			scanf("%s", hapusjalur);
			if(strcmp(hapusjalur,"ya") == 0){
				for(j=i;j<njalur;j+=1){
					datajalur[j] = datajalur[j+1];
				}
				njalur--;
				writefiletjalur();
			}else{
				i++;
			}
		}
	}
	
	if(status == 0){
		printf("Data tidak ditemukan, mungkin anda sebenarnya jomblo :)\n");
	}
}

//membuat kotak
void kotak() {
	int i,j;
	
	for (i=1;i<=p+3;i++) { 
		if (i==1 || i==p+3){ 
				for( j=1;j<=l;j++){ 
					if (j==1 || j==l){
						pp[i][j] = '|' ; 
					}else{
						 pp[i][j] = '-';
					}
				}	
		} else{ 
			for ( j=1;j<=l;j++) {
				if(j==1 || j==l){
					pp[i][j] = '|' ;
				}else 
					pp[i][j] = ' ' ; 
				} 

		}
	}	
	
	for(i=1;i<=p+3;i++){
		for(j=1;j<=l;j++){
			printf("%c",pp[i][j]);
		}
		printf("\n");
	}
	
	
}

//mengisi kotak
void fillkotak(){
	readfiletkota();
	kotak();
	int i,j,k,m;
	for(i=0;i<nkota;i++){
		for(j=0;j<l;j++){
			for(k=0;k<p;k++){
				if((j==datakota[i].x) && (k==datakota[i].y)){
					for(m=0; m<strlen(datakota[i].kota);m++){
						pp[k+2][j+2+m] = datakota[i].kota[m];
					}
				}
			}
		}
	}
	
	
	/*for(i=0;i<p+3;i++){
		for(j=0;j<l;j++){
			printf("%c",pp[i][j]);
		}
		printf("\n");
	}*/
}

//animasi
void animasi(int nomorJalur){
	readfiletkota(); //open file kota
	readfiletjalur(); //open file jalur
	
	
	int i,j,k,m; //iterasai
	fillkotak();
	int tampungkot1x[20];
	int tampungkot1y[20];
	int tampungkot2x[20];
	int tampungkot2y[20];
	
	for(i=0;i<nkota;i++){
		if(strcmp(datakota[i].kota,datajalur[i].kota1) == 0){
			tampungkot1x[i] = datakota[i].x;
			tampungkot1y[i] = datakota[i].y;
		}
		if(strcmp(datakota[i].kota,datajalur[i].kota2) == 0){
			tampungkot2x[i] = datakota[i].x;
			tampungkot2y[i] = datakota[i].y;
		}
			for(j=0;j<njalur;j++){
				if(nomorJalur == datajalur[i].nomorJalur){
					for(k=tampungkot1x[i];k<tampungkot2x[i];k++){
						printf("S\n", pp[k+2][m+2]);
					}
					/*for(m=tampungkot1y[i];m<tampungkot2y[i];m++){
						
					}*/
				}
			}		
	}
	
	
	
	
	
	/*for(i=0;i<nkota;i++){ //i dan j digunakan untuk mengecek file kota dan jalur
		for(j=0;j<njalur;j++){
			if(strcmp(datakota[i].kota,datajalur[j].kota1) == 0){ //apabila sama maka copy
				strcpy(datajalur[j].kota1, datakota[i].kota);
			}
			if(strcmp(datakota[i].kota,datajalur[j].kota2) == 0){ //apabila sama maka copy
				strcpy(datajalur[j].kota2, datakota[i].kota);
			}
			if(strcpy(datajalur[j].kota1, datakota[i].kota)){ //menampung koordinat x
				tampung_koordinat_kota1x[i] = datakota[i].x;
				tampung_koordinat_kota1y[i] = datakota[i].y  ;
			}
			if(strcpy(datajalur[j].kota2, datakota[i].kota)){
				tampung_koordinat_kota2x[i] = datakota[i].x;
				tampung_koordinat_kota2y[i] = datakota[i].y;
			}
			if((tampung_koordinat_kota1x[i] == datakota[i].x) && (tampung_koordinat_kota2x[i] == datakota[i].x){
				jalan1 = tampung_koordinat_kota2x[i] - tampung_koordinat_kota1x[i];
			}
			if((tampung_koordinat_kota1y[i] == datakota[i].y) && (tampung_koordinat_kota2x[i] == datakota[i].y){
				jalan2 = tampung_koordinat_kota2y[i] - tampung_koordinat_kota1y[i];
			}
		}
	}
	*/
	
}


//mencari data di file kota
int findDatakota(int x,int y){
	int status = 0;
	int i = 0;
	
	readfiletkota();
	
	while(status == 0 && i < nkota){
		if((datakota[i].x == x) && (datakota[i].y == y)){
			status = 1;
		}else{
			i++;
		}
	}
	
	return status;
}

//mencari data di file jalur
int findDatajalur(int nomorJalur,char kota1[50],char kota2[50]){
	int status = 0;
	int i = 0;
	int j = 0;
	readfiletjalur();
	readfiletkota();
	
	while(status == 0 && i < njalur){
		for(j=0;j<nkota;j++){
		if(((strcmp(datajalur[i].kota1, kota1) == 0) && (strcmp(datajalur[i].kota2, kota2) == 0)
			&& (datajalur[i].nomorJalur == nomorJalur))
		&&((strcmp(datajalur[i].kota1, datakota[j].kota) == 0) && (strcmp(datajalur[i].kota2, datakota[j].kota) == 0))){
			status = 1;
		}else if((strcmp(datajalur[i].kota1, kota1) == 0) && (strcmp(datajalur[i].kota2, kota2) == 0)
			&& (datajalur[i].nomorJalur == nomorJalur) &&
		(strcmp(datajalur[i].kota1, datakota[j].kota) != 0) || (strcmp(datajalur[i].kota2, datakota[j].kota) != 0)){
			status == 2;
		}
		else{
			i++;
			j++;
		}
		}
	}
	
	return status;
}
//menambah data kota
void inserdatakota(tkota kota){
	int status = findDatakota(kota.x,kota.y);
	
	if(status == 0){
		datakota[nkota] = kota;
		nkota++;
		writefiletkota();
	}else if(status == 1){
		printf("Data sudah ada!\n");
	}
}

//menambah data jalur
void inserdatajalur(tjalur jalur){
	int status = findDatajalur(jalur.nomorJalur, jalur.kota1,jalur.kota2);
	
	if(status == 0){
		datajalur[njalur] = jalur;
		njalur++;
		writefiletjalur();
	}else if(status == 1){
		printf("Data sudah ada!\n");
	}else if(status == 2){
		printf("Data tidak ada di file kota!\n");
		printf("Mungkin mantan anda tinggal di kota lain.\n");
	}
}


//menghapus data kota
void deleteDatakota(char kota[50]){
	readfiletkota();
	int i, j;
	int status = 0;
	i=0;
	char delete[20];
	
	while(i<nkota && status == 0){
		if((strcmp (datakota[i].kota,kota) == 0)){
			status = 1;
			printf("Data ditemukan! Apakah anda yakin untuk menghapus data ini?\n");
			printf("Yes/No?\n");
			scanf("%s", &delete);
			if(strcmp(delete,"ya") == 0){
				for(j=1;j<nkota;j++){
					datakota[j] =  datakota[j+1];
				}
				nkota--;
			}
		}else{
			i++;
		}
	}
	
	if(status == 0){
		printf("Kota mantanmu tidak ditemukan!\n");
	}
}






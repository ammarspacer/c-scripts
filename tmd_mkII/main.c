#include <stdio.h>
#include <string.h>
#include <time.h>

/*Saya [AMMAR ASHSHIDDIQI] tidak melakukan kecurangan yang dispesifikasikan pada tugas
masa depan Alpro 2 pada saat mengerjakan Tugas Masa Depan Alpro 2. Jika
saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya
bersedia menerima hukumanNya. Aamiin.*/

/*void wait(float x) {
time_t start;
time_t current;
time(&start);
do
time(&current);
while (difftime(current,start) < x);
}*/
typedef struct{
	int x;
	int y;
	char kota[50];
}tkota;

typedef struct{
	int nomorJalur;
	char kota1[50];
	char kota2[50];
}tjalur;




int main(){
	tkota TKota
	FILE *TKOTA
	TKOTA = fopen("tkota.txt", "w");
	
	scanf("%d", &tkota.x);
	
	while(tkota.x != -1){
		scanf("%d", &tkota.y);
		scanf("%s", &tkota.kota);
		
		fprintf(TKOTA, "%d %d %s\n", tkota.x, tkota.y, tkota.kota);
	
		scanf("%d", &tkota.x);
	}
	
	fprintf(TKOTA, "%d %d %s\n", "-1", "-1", "##");

	fclose(TKOTA);

	return 0;
}

int main(){
	tjalur TJalur
	FILE *TJALUR
	TJALUR = fopen("tjalur.txt", "w");
	
	scanf("%d", &tjalur.nomorJalur);
	
	while(tjalur.nomorJalur != -1){
		scanf("%s", &tjalur.kota1);
		scanf("%s", &tjalur.kota2);
		
		fprintf(TKOTA, "%d %d %s\n", tkota.x, tkota.y, tkota.kota);
	
		scanf("%d", &tkota.x);
	}
	
	fprintf(TKOTA, "%d %d %s\n", "-1", "-1", "##");

	fclose(TKOTA);

	return 0;
}



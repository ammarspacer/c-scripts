#include "head.h"
#include "tkota.c"

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
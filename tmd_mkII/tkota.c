#include "head.h"



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
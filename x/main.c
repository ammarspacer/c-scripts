#include <stdio.h>

int main(){
	
	float panjang;
	float lebar;
	float luas;
	
	FILE *FIN, *FOUT;
	
	FIN = fopen("data.txt", "r");
	
	FOUT = fopen("hasil.txt", "w");
	
	fscanf(FIN, "%f %f", &panjang, &lebar);
	
	luas = panjang * lebar;
	
	fprintf(FOUT, "Luas segiempat = %f \n", luas);
	
	fclose(FIN);
	fclose(FOUT);
	
	return 0;
}
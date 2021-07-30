#include "machine.c"

int main(){
	p=20;
	l=50;
	
	/*int menu;
	
	printf("Menu:\n");
	printf("0. Panjang dan lebar papan\n");
	printf("1. Kelola kota\n");
	printf("2. Kelola kota\n");
	printf("3. Kelola kota\n");
	printf("4. Kelola kota\n");
	printf("Masukkan menu: \n");
	scanf("%d", &menu);*/
	
	/*
	if(menu == 0){
		printf("panjang %d\n",p);
		printf("lebar %d\n",p);
	}else if(menu == 1){
		for(i=0;i<nkota;i++){
		printf("%d %d %s\n", datakota[i].x, datakota[i].y,datakota[i].kota);
	}
	}
	
	*/
	int i;
	int j;
	int nomorJalur;
	scanf("%d",&nomorJalur);
	animasi(nomorJalur);
	fillkotak();
	/*for(i=1;i<=p+3;i++){
		for(j=1;j<=l;j++){
			printf("%c",pp[i][j]);
		}
		printf("\n");
	}*/
	
	
	for(i=0;i<nkota;i++){
		printf("%d %d %s\n", datakota[i].x, datakota[i].y,datakota[i].kota);
	}
	
	readfiletjalur();
	for(i=0;i<njalur;i++){
		printf("%d %s %s\n", datajalur[i].nomorJalur, datajalur[i].kota1,datajalur[i].kota2);
	}
	
	return 0;
}
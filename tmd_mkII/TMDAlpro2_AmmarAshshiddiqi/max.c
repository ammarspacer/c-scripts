#include "machine.c"


int main(){
	int i,j; //var iterasi
	int menu; //var menu
	tkota kota; //memanggil tkota
	tjalur jalur; //memanggil tjalur
	system("color f0");
	
	//MENJALANKAN MENU
	do{
		system("cls");
		//tampil menu
		printf("Hallo :)\n");
		printf("Menu:\n");
		printf("0. Panjang dan Lebar Papan\n");
		printf("1. Kelola Kota\n");
		printf("2. Kelola jalur\n");
		printf("3. Animasi Solve\n");
		printf("4. Keluar\n");
		printf("Masukkan menu : \n");
		scanf("%d", &menu);
		
		if(menu == 0){//jika menu 0 yang dipilih
			int p,l;
			printf("masukkan panjang: ");
			scanf("%d", &p);
			printf("masukkan lebar: ");
			scanf("%d", &l);
			kotak();
			printf("Done\n");
		}
		else if(menu == 1){ //jika menu 1 yang dipilih
			int submenkota;
			do{
			system("cls");
			printf("Isi kota saat ini: \n");
			printf("|x   |y    |kota       \n");
			for(i=0;i<nkota;i++){
				printf("|%d    |%d    |%s\n", datakota[i].x, datakota[i].y,datakota[i].kota);
			}
			printf(" \n");
			printf(" \n");
			
			printf("Menu:\n");
			printf("   1. Tambah\n");
			printf("   2. Hapus\n");
			printf("   3. Menu utama\n");
			printf(" Pilihan Menu: \n");
			scanf("%d", &submenkota);
			if(submenkota == 1){ //jika submenu 1 yang dipilih
				system("cls");
				printf("x: \n");
				scanf("%d", &kota.x);
				printf("y: \n");
				scanf("%d", &kota.y);
				printf("kota: \n");
				scanf("%s", &kota.kota);
				inserdatakota(kota);
			}else if(submenkota == 2){ //jika sub menu dua yang dipilih
				char kota[50];
				printf("kota: \n");
				scanf("%s", &kota);
				deleteDatakota(kota);
			}
			}while(submenkota != 3); //jika submenu 3 yang dipilih
		}else if(menu == 2){ //jika menu 2 yang dipilih
			int submenjalur;
			do{
			system("cls");
			printf("Isi jalur saat ini: \n");
			printf("|x   |kota1    	|kota2       ");
			for(i=0;i<njalur;i++){
				printf("|%d    |%s    	  |%s			\n", datajalur[i].nomorJalur, datajalur[i].kota1,datajalur[i].kota2);
			}
			printf(" \n");
			printf(" \n");
			
			printf("Menu:\n");
			printf("   1. Tambah\n");
			printf("   2. Hapus");
			printf("   3. Menu utama");
			printf(" Pilihan Menu: ");
			scanf("%d", &submenjalur);
			if(submenjalur == 1){
				printf("nomorjalur: \n");
				scanf("%d", &jalur.nomorJalur); //jika submenu 1 yang dipilih
				printf("kota1: \n");
				scanf("%s", &jalur.kota1);
				printf("kota2: \n");
				scanf("%s", &jalur.kota2);
				inserdatajalur(jalur);
			}else if(submenjalur == 2){ //jika submenu 2 yang dipilih
				int nomorJalur;
				char kota1[50];
				char kota2[50];
				printf("nomorJalur: \n");
				scanf("%d", &nomorJalur);
				printf("kota1: \n");
				scanf("%s", &kota1);
				printf("kota2: \n");
				scanf("%s", &kota2);
				deletefiletjalur(nomorJalur,kota1,kota2);
			}
			}while(submenjalur != 3);
		}else if(menu == 3){ //jika menu 3 yang dipilih
			system("cls");
			fillkotak();
			for(i=1;i<=p+3;i++){
				for(j=1;j<=l;j++){
					printf("%c",pp[i][j]);
			}
			printf("\n");
			}
		}else{
			printf("Selamat jalan cintaku\n"); 
		}
	
	}while(menu != 4);
	
	
	
	
	
	
	
	return 0;
}
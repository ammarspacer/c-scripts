#include <stdio.h>
int main(){
	//Menentukan variabel pilihan tarif
	int jenis_paket;
	//Menentukan variabel jam dan menit masuk pelanggan
	int ja, max;
	// Menentukan variabel jam dan menit keluar pelanggan
	int jb, mbx;
	// Menentukan variabel uang yang dibayar pelanggan
	int bayaran;
	int kembalian;
	int harga_tarif;
	//Masukkan tukang jaga warnet yang ganteng kaya Bang Sutan
	scanf("%d %d %d %d %d", &jenis_paket, &ja, &max, &jb, &mbx);
	scanf("%d", &bayaran);
	
	//Rumus lama jam & lama menit
	int jam, menit;
	jam = (jb - ja)*60;
	menit = (mbx - max) + jam;
	
	//Syarat-syarat inputan
	
	//A. Syarat pilihan tarif
	if(jenis_paket == 1){
		printf("Game E&\n");
		harga_tarif = 14000;
		if(menit<=480){
		harga_tarif = 14000;
		}else if((480 < menit) && (menit <= 510)){
			harga_tarif = 15000 ;
		}else if(menit > 510){
		harga_tarif = 14000 + ((((menit -480) + 29)/ 30)*1250);}
	}
		 		
	else if(jenis_paket == 2){
		printf("Download OQ2\n");
		if(menit<=300){
			harga_tarif = 10000;
		}else if((menit > 300) && (menit <= 330)){
			harga_tarif = 11000;
		}else if(menit > 330){
			harga_tarif = 10000 + ((((menit-300) + 29)/ 30)*1250);
		}
	
	}else if(jenis_paket == 3){
		printf("Browsing HQQ\n");
		if(menit <= 180){
		harga_tarif = 6000;
		}else if((180 < menit) && (menit <= 210)){
			harga_tarif = 7000 ;
		}else if(menit > 210){
			harga_tarif = 6000 + ((((menit -180) + 29)/ 30)*1250);
		}	
		 		
	}
	else if(jenis_paket == 4){
		printf("Non-Paket\n");
		harga_tarif =(((menit + 29)/ 30)*1250);		
	}
	
	
	

	
	kembalian = bayaran - harga_tarif;
		
	printf("%d\n", harga_tarif);
	if(bayaran>=harga_tarif)
	{
		kembalian = bayaran - harga_tarif;
		printf("%d\n", kembalian);
	}
	else
	{
		printf("tidak valid\n");
	}
	return 0;
	}

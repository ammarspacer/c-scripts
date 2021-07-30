#include "head.h" //MEMANGGIL HEADER DARI "head.h"
#include <string.h> //MEMANGGIL HEADER UNTUK STRING

int main(){   //FUNCTION MAIN
	int angka1; //VARIABEL UNTUK ANGKA PERTAMA
	int angka2; //VARIABEL UNTUK ANGKA KEDUA
	int tebal; //VARIABEL UNTUK KETEBALAN TAMPILAN
	int i; //VARIABEL UNTUK ITERASI
	char operasi[50]; //VARIABEL UNTUK OPERASI
	
	scanf("%d", &angka1); //MEMINTA MASUKAN ANGKA PERTAMA
	scanf("%d", &angka2); //MEMINTA MASUKAN ANGKA KEDUA
	scanf("%d", &tebal); //MEMINTA MASUKAN KETEBALAN TAMPILAN
	scanf("%s", &operasi); //MEMINTA MASUKAN OPERASI HITUNG YANG AKAN DIPROSES
	
	for(i=0;i<tebal;i++){                         
		baris1(angka1,angka2,operasi,tebal); //MEMANGGIL PROSEDUR PROSES TAMPILAN BARISAN PERTAMA
	}
	for(i=0;i<tebal;i++){
		baris2(angka1,angka2,operasi,tebal); //MEMANGGIL PROSEDUR PROSES TAMPILAN BARISAN KEDUA
	}
	for(i=0;i<tebal;i++){
		baris3(angka1,angka2,operasi,tebal); //MEMANGGIL PROSEDUR PROSES TAMPILAN BARISAN KETIGA
	}
	
	for(i=0;i<tebal;i++){
		baris4(angka1,angka2,operasi,tebal); //MEMANGGIL PROSEDUR PROSES TAMPILAN BARISAN KEEMPAT
	}
	
	for(i=0;i<tebal;i++){
		baris5(angka1,angka2,operasi,tebal); ////MEMANGGIL PROSEDUR PROSES TAMPILAN BARISAN KELIMA
	}
	
	
	return 0; //RETURN 0
}



/*<WARNING> SOME BUG STILL IN INFESTIGATION*/
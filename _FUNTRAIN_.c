#include <stdio.h>
/* Saya Ammar Ashshiddiqi mengerjakan evaluasi Evaluasi 1 dalam mata kuliah Algoritma & 
Pemrograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
Aamiin. */


/*FUNTRAIN) Kereta Mainan Ceria


Pembuat Soal: Tim Asisten Pemograman 7

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB

Moni mempunyai sebuah kereta mainan. Kereta tsb mempunyai 1 buah kepala yang bernomor > 100 dan n banyak gerbong dengan setiap gerbong memiliki nomor yang acak. Kemudian moni ingin mengambil m banyak gerbongnya untuk memperpendek keretanya. Lalu moni iseng untuk mengecek nomor semua gerbong nya, apakah semua nomor gerbong nya bersifat palindrom atau tidak. Jika iya maka moni akan membandingkan jumlah nomor gerbongnya dengan nomor kepala nya, jika nomor kepalanya lebih besar atau sama maka kereta akan jalan jika tidak maka kereta tidak akan berjalan.

Note : palindrom adalah sesuatu hal yang jika dibagi 2 maka bagian depan dan bagian belakang seperti dicerminkan atau pembacaan dari depan dan dari belakang sama
contoh : 13 0 8 0 13 atau 23 141 98 344 98 141 23

Format Masukan

n, banyak nya gerbong
nomor_kepala,
nomor_gerbong,
m, banyak gerbong yang diambil,
nomor_gerbong yang diambil

Format Keluaran

urutan nomor gerbong
Kereta jalan. (jika gerbong palindrom dan nomor kepala kereta > jumlah nomor gerbong)
Kereta tidak jalan. (jika gerbong palindrom dan nomor kepala kereta < jumlah nomor gerbong)
Nomor gerbong tidak palindrom. (jika gerbong tidak palindrom)

Contoh Masukan

6
104
909 5 123 92 5 909
1
92


Contoh Keluaran

909 5 123 5 909
Kereta tidak jalan.

Contoh Masukan 2

10
322
9 1 0 10 23 19 23 2 10 9
4
0 1 2 19


Contoh Keluaran 2

9 10 23 23 10 9
Kereta jalan.

       
Contoh Masukan 3

10
123
1 2 3 4 5 6 7 8 9 10
4
8 7 2 3


Contoh Keluaran 3

1 4 5 6 7 10
Nomor gerbong tidak palindrom.

*/




int main(){
	/*---------------------------INPUT------------------------*/
	
	//Pemisalan variabel banyak gerbong, array, dan jumlah gerbong
	int n, i,gerbong[n];

	//Meminta masukan jumlah gerbong Moni
	scanf("%d", &n);
	
	//Variabel nomor kepala kereta Moni
	int nomorkepala;
	if(nomorkepala>=100){
		scanf("%d", &nomorkepala);
	}
	
	//Meminta inputan nomer gerbong
	for(i=0;i<n;i++){
		scanf("%d", &gerbong[i]);
	}
	
	//Jumlah gerbong yg ilang
	int gerbongilang;
	scanf("%d", &gerbongilang); //-----> meminta jumlah gerbong yg diambil Moni
	
	
	//Nomor gerbong yang diambil Moni
	int nogerbongilang[gerbongilang];
	int j;
	for(j=0;j<(n-gerbongilan);j++){
		scanf("%d", &nogerbongilang[j]);
	}
	
	/*----------------PROSES------------------*/
	
	
	
	
	/*----------------------OUTPUT--------------------------------*/
	if(nogerbongilang[j] == gerbong[i]){
		printf(" ");
	}
	
		
	//Syarat Palindrom
	
	if(gerbong[0] != gerbong[n-1]){
		printf("%d", gerbong[n]);
		printf("Nomor gerbong tidak palindrom.\n");
	}else if(gerbong[0] == gerbong[n-1]){
		printf("Nomor gerbong tidak palindrom.\n");
		
	}
	
	return 0;
}
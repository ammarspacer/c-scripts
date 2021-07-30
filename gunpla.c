/* 	
(Ghosty16) Gunpla Baru Piyu


Pembuat Soal: Asisten Pemrograman 7

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB

Setiap akhir bulan November akan banyak diskon yang ditawarkan penjual di seluruh dunia untuk memeriahkan Black Friday dan Cyber Monday.

Sultan Piyu yang merupakan kolektor gunpla (Gundam Plastic Model) berniat untuk memborong banyak figure gundam di momen ini.

Bantu Sultan Piyu membandingkan harga / diskon dan kualitas setiap gunpla yang tersedia sehingga mendapatkan gunpla berkualitas terbaik di kriteria yang ditentukan namun tetap dapat dibeli oleh sultan (sesuai dengan uang di dompet).


Gunakan array tipe terstruktur dan minimal satu while-loop untuk menyelesaikan kasus ini.
Tugas Praktikum ini menguji kemampuan mengoperasikan while-loop dan menggunakan array tipe terstruktur.

Format Masukan :

dalam loop:

q -> quality / kualitas gunpla (1 ~ 10)
d -> discount / persentase diskon (dalam persen / 0 ~ 100)
p -> price / harga setelah diskon

loop input ini berhenti bila ada input angka 0 (nol).


y -> kriteria harga [D/C] ( D = Diskon Tertinggi, C = Cheap/Harga Termurah )
z -> nominal uang di dompet Sultan Piyu

Format Keluaran :

Beli Gunpla Kualitas * seharga * setelah diskon * persen.
atau
Tidak ada yang cocok.

Lihat contoh untuk informasi lebih lanjut.
Contoh Masukan

3
90
100000
0
D
50000


Contoh Keluaran

Tidak ada yang cocok.

Contoh Masukan 2

3
90
100000
7
60
600000
7
70
450000
7
50
300000
0
D
500000


Contoh Keluaran 2

Beli Gunpla Kualitas 7 seharga 450000 setelah diskon 70 persen.

       
Contoh Masukan 3

3
90
100000
7
60
600000
7
70
450000
7
50
300000
0
C
500000


Contoh Keluaran 3

Beli Gunpla Kualitas 7 seharga 300000 setelah diskon 50 persen.

*/

/* Saya AMMAR ASHSHIDDIQI mengerjakan evaluasi TUGAS PRAKTIKUM 6 dalam mata kuliah ALGORITMA DAN PEMROGRAMAN 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
typedef struct{
	int q; //-----> kualitas
	int d; //-----> diskon
	int p;//-----> harga setelah  diskon
	int lolos;//-----> lulus syarat
}gunpla;

int main(){
	//INPUT
	
	gunpla input[50];//array inputan
	int i = 0; //Untuk for
	int n = 0; //Untuk jumlah masukan dan var di while dan for
	scanf("%d", &input[n].q);
	while(input[n].q != 0){
		scanf("%d", &input[n].q);
		scanf("%d", &input[n].d); //input diskon
		scanf("%d", &input[n].p); //input harga setelah diskon
		n++; //iterasi
		
	}
	

	char y; //variabel D/C
	
	
	scanf(" %c", &y); // D/C


	int z; //Duit
	scanf("%d", &z); //Duit

	input[n].lolos = 0; //Variabel untuk mengecek uangpiyu bisa bayar
	
	for(i=0;i< n;i++){
		if(z >= input[n].d ){//Mengecek uang Piyu
				input[n].lolos = 1; //jika uangpiyu bisa bayar
		}else if(z < input[n].d ){
				input[n].lolos = 0; //jika piyu gagal bayar
		}
	}
	
	if(input[n].lolos = 0){
		printf("tidak ada input yg memenuhi\n");
	}
	
	int dismax = 0; //Diskon max
	int kuamax = 0; //Kua max
	
	int maksimal = input[0].q;
	for(i=1; i < n; i++){
		if(maksimal < input[n].q){//----------------> quality max
			maksimal = input[n].q;
		}else{
			maksimal == maksimal;//----->bukan quality max
		}
	}
	
	
	
	
	switch(y){
		case D:
			for(i=0;i ;i++)
				if(input[i].d > dismax){
					dismax == input[i].d;
					dismax =
				}
		case C;
			if(input[i].q > kuamax){
				kuamax == input[i].q;
			}
	}
	
	
	
	
	return 0;
}

#include <stdio.h>
/* Saya Ammar Ash mengerjakan evaluasi Tugas Praktikum 3 dalam mata kuliah Algoritma & 
Pemrograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
Aamiin. */
/*  	
(Chochic1) kirim coklat untuk moni


Pembuat Soal: Asisten Pemrograman

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB

Hari ini moni berulangtahun ,piyu ingin memberikan coklat kepada moni namun ia masih diluarkota. Maka ia berniat membeli coklat dan mengirimnya kerumah moni.
Ia membeli coklat dengan harga Rp.8000,00 dari tokochocochici lewat program buatan toko chocochici. cara penggunaan programnya seperti berikut:

A. pertama pilih jasa pengiriman yang ingin digunakan,disediakan 3 pilihan
   1.Jasa pengiriman LINK dengan waktu pengiriman coklat 12 jam 8 menit 6 detik
   2.Jasa pengiriman OWL dengan waktu pengiriman coklat 5 jam 28 menit 7 detik
   3.Jasa pengiriman IKIT dengan waktu pengiriman coklat 8 jam 25 menit 16 detik
B. kedua masukan jumlah coklat yang ingin dibeli
C. ketiga masukan waktu ketika piyu memesan coklat
D. keempat masukan hari ketika piyu memesan coklat(senin=1,selasa=2,dst)
E. kelima masukan jumlah uang yang dimiliki piyu

jika sudah selesai maka program akan menampilkan

a. sisa stok coklat di toko chocochici(stok awal sebelum dibeli 10)
b. jumlah uang kembalian piyu
c. hari coklat sampai dirumah moni
d. waktu coklat sampai dirumah moni

namun jika uang piyu tidak cukup untuk membayar coklat tersebut maka akan menampilkan
--uang anda tidak mencukupi--.
dan jika jumlah coklat yang ingin dibeli oleh piyu lebih banyak dari jumlah stok coklat yang ada maka akan menampilkan --mohon maaf stok coklat tidak cukup--.

Buatlah program seperti program jual-beli toko chocochici!
gunakan switch dan tipe data terstruktur

Format Masukan

n, 1<=n<=3, pilihan jasa pengiriman.
x, x>0, jumlah coklat yang ingin dibeli 
jam menit detik, waktu ketika piyu memesan coklat
r, 1<= r <= 7, hari ketika piyu memesan coklat 
m, m>0, jumlah uang piyu

Format Keluaran

sisa stok coklat
jumlah kembalian
hari coklat sampai dirumah moni
waktu ketika coklat sampai dirumah moni*/
//Ket:
//1. LINK  2. OWL 3. IKIT

//MENENTUKAN VARIABEL TERSTRUKTUR 
typedef struct{
	int hari;
	int jam;
	int menit;
	int detik;
	int totaltime;
}waktu;


int main(){
	//INPUT
	
	//Penentuan Variabel
	waktu pergi, sampai; //variabel terstruktur
	int jenisjasa; //variabel jenis jasa yang dipakai Piyu(padi)
	int jumlah; //variabel jumlah barang yang dibeli Piyu
	int uangpiyu; //variabel Uang Piyu
	int jumlahawal, jumlahakhir; //variabel jumlah barang sebelum dan sesudah
	int hargacoklat; //variabel harga coklat
	int kembalian; //variabel kembalian yang diterima Piyu(Padi)
	
	//Meminta Masukan User
	scanf("%d", &jenisjasa);//input jenis
	scanf("%d", &jumlah); //input jumlah barang
	scanf("%d %d %d", &pergi.jam, &pergi.menit, &pergi.detik); //input waktu perginya pengiriman barang
	scanf("%d", &pergi.hari);//input hari pengiriman barang
	scanf("%d", &uangpiyu); // input jumlah uang Piyu(Padi)
	
	//Rumus waktu pergi
	pergi.totaltime = (pergi.jam * 3600) + (pergi.menit * 60) + pergi.detik;
	
	//jumlah awal dan rumus jumlah akhir
	jumlahawal = 10;
	jumlahakhir = jumlahawal - jumlah;
	
	//Harga coklat
	hargacoklat = 8000;
	
	// Melakukan pemilihan untuk menentukan kapan coklat sampai
	switch (jenisjasa){
		case 1 :{
			sampai.totaltime = pergi.totaltime + ((12 * 3600) + (8 * 60) + 6);	//waktu paket LINK
		}break;
		case 2 :{
			sampai.totaltime = pergi.totaltime + ((5 * 3600) + (28 * 60) + 7);	//waktu paket OWL
		}break;
		case 3 :{
			sampai.totaltime = pergi.totaltime + ((8 * 3600) + (25 * 60) + 16);	//waktu paket IKIT 
		}break;
		default:		//Jika pemilihan paket selain 3 diatas
		break;
	}
	
	//PROSES
	
	//Jika waktu sampai lebih dari 24 jam
	if(sampai.totaltime > 86400){ //Total waktu 24 jam = 24*3600 = 86400
		pergi.hari = pergi.hari + 1;
		sampai.totaltime = sampai.totaltime - 86400;		
	}
	
	//Jika waktu sampai lebih dari 7 
	if(pergi.hari > 7){ 
		sampai.hari = pergi.hari - 7;
	}else{ //Jika hari sampai sama dengan hari pergi
		sampai.hari = pergi.hari; 
	}
	
	// Mengkonversi waktu sampai ke bentuk jam, menit, dan detik kembali
	sampai.jam = sampai.totaltime / 3600; // ---------------> jam sampai
	sampai.menit = (sampai.totaltime % 3600) / 60; // ------------> menit sampai
	sampai.detik = (sampai.totaltime % 3600) % 60; // ------------> detik sampai
	
	/*OUTPUT*/
	
	
	// Melakukan pemilihan lebih dari dua kondisi
	if(jumlah > jumlahawal){ // Jika jumlah coklat yang ingin dibeli lebih dari stok coklat
		printf("stok coklat tidak cukup\n");
	// Jika stok coklat dan uang cukup
	}else if(kembalian < 0){
			printf("uang anda tidak mencukupi\n");
	}else{
		printf("%d\n", jumlahakhir); // Mengoutput sisa stok coklat
	
		kembalian = uangpiyu - jumlah * hargacoklat; // Menghitung uang kembalian setelah coklat dibeli               
		printf("%d\n", kembalian); 
		switch (jenisjasa){
			
			// Jika yang dipilih jasa pengiriman no.1 (LINK)
			case 1 :{
				printf("%d\n", sampai.hari);
				printf("%d %d %.2d\n", sampai.jam, sampai.menit, sampai.detik);
			}
			break;
		
			// Jika yang dipilih jasa pengiriman no.2 (OWL)
			case 2 :{
				printf("%d\n", sampai.hari);
				printf("%d %d %.2d\n", sampai.jam, sampai.menit, sampai.detik);
			}
			break;
		
			// Jika yang dipilih jasa pengiriman no.3 (IKIT)
			case 3 :{
				printf("%d\n", sampai.hari);
				printf("%d %d %.2d\n", sampai.jam, sampai.menit, sampai.detik);
			}
			break;
		
			// Jika jasa yang dipilih tidak ada
			default:
			break;
		}
		
		}
	
	return 0;
}
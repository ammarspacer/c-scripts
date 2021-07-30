/*    	
(FRNDMOPI) Sandi Moni Piyu


Pembuat Soal: Tim Asisten Pemrograman 7

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB

Moni dan Piyu adalah sahabat sejak kecil. Saking dekatnya, dulu mereka pernah membuat sandi yang hanya bisa dibaca oleh mereka berdua.
Sekarang Moni dan Piyu sudah menjadi mahasiswa. Piyu yang merupakan mahasiswa ilmu komputer berkeinginan membuat program mengenai sandi mereka agar piyu dapat melihat program tersebut apabila dia lupa bagaimana membaca sandi yang mereka buat.

Bantulah piyu untuk membuat program tersebut
(Program terbagi menjadi 3 file dan minimal memakai 2 prosedur)

Format masukan :
n , banyaknya kata (genap / ganjil)
a , kata-kata yang ingin disampaikan

Format Keluaran :
kata sandi (a atau b)


Cara Membuat Kata Sandi :
a) jika banyak kata bernilai genap, maka
1. kata ke ganjil di tukar tempat dengan kata ke genap (pertukaran dilakukan setiap 2 kata)
2. huruf konsonan dibalikan tempatnya. yg pertama menjadi terakhir, yang terakhir menjadi yang pertama, dst
==========
> kita berdua sahabat sejati
> berdua kita sejati sahabat (langkah ke 1)
> tebhua sita jesati kadarab (langkah ke 2)

b) jika banyak kata bernilai ganjil, maka
1. setiap huruf konsonan diubah menjadi huruf ke panjang kata selanjutnya
misalnya : alpro
panjang kata (alpro) = 5, maka setiap huruf konsonan akan menjadi huruf ke lima selanjutnya
5 huruf selanjutnya dari : l = q, p = u, r = w
jadi hasil akhirnya alpro = aquwo
2. lalu setiap huruf digeser 1 kali ke sebelah kiri
3. setiap setengah kata dibalik
==========
> selalu bersama dimanapun
> yeraru ieyzata mivawayuw (langkah ke 1)
> erarui eyzatam ivawayuwy (langkah ke 2)
> areiur zyeamat waviaywuy (langkah ke 3)
Contoh Masukan

4
kita
berdua
sahabat
sejati


Contoh Keluaran

tebhua sita jesati kadarab

Contoh Masukan 2

3
selalu
bersama
dimanapun


Contoh Keluaran 2

areiur zyeamat waviaywuy

       
Contoh Masukan 3

10
moni
dan
piyu
sudah
menjadi
sahabat
sejak
mereka
masih
kecil


Contoh Keluaran 3

has moli cukak jisu karamad jenmati behesa yepah desin manid
*/

/*Saya [Ammar Ashshiddiqi] mengerjakan evaluasi [TUGAS PRAKTIKUM 9] dalam mata kuliah [ALGORITMA DAN PEMROGRAMAN 1] 
untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/


#include "machine.c"
#include <string.h>


int main(){
	int n; //variabel masukan jumlah kata
	
	
	scanf("%d", &n); //meminta jumlah kata
	int i; //iterasi
	
	char pesan[n][50];
	
	for(i=0;i<n;i++){
		scanf("%s", &pesan[i]);
	}
	 
	char tempat_penyimpanan_kata[50]; 
	 
	 
	genap(n, tempat_penyimpanan_kata, pesan); 
	ganjil(n, tempat_penyimpanan_kata, pesan);
	 
	 
	 
	return 0;
}
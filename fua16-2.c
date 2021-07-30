/* Saya Ammar Ash mengerjakan evaluasi UTS dalam mata kuliah Algoritma & 
Pemrograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
Aamiin. */

/*Mission Briefing
(fua16) 2


Pembuat Soal: Rosa A. S.

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB



Kompetensi yang dievaluasi: kemampuan menggunakan for untuk operasi array.
- jangan lupa ketik janji setia pada kejujuran
- setiap suasana tidak kondusif akan mendapat teguran, dan setiap teguran ketiga akan dikenakan pemotongan waktu 10 menit bagi semua peserta evaluasi.

Diberikan sebuah array dari karakter, tampilkan isi array dimulai dari huruf tengah separuh depan atau separuh belakang.
Format Masukan:

n, 0 < n < 50, banyaknya karakter isi array, selalu genap.
n baris karakter.
Format Keluaran:

separuh depan dengan awal adalah huruf tengah - separuh belakang dengan awalan huruf belakang.
Contoh Masukan

6
a
i
u
e
o
x


Contoh Keluaran

u i a - x o e

Contoh Masukan 2

10
t
a
t
i
t
u
d
a
d
i


Contoh Keluaran 2

t i t a t - i d a d u

       
*/

#include <stdio.h>
int main(){
	//menentukan varia
	int n;
	scanf("%d", &n);
	int i;
	char array1[n];
	
	for(i = 0; i < n; i++){	
		scanf("%c", &array1[i]);
	}
	
	int huruf1=array1[0], huruf2=array1[n/2];
	
	for(i = n;i < (n/2); i++){
		if(huruf1 = array1[i]){
			scanf("%c", array1[i]);
			}
		if(huruf2 = array1[i]){
			scanf("%c", array1[i]);
			}
	}
	for(i = n;i  (n/2); i++){
		if(huruf1 = array1[i]){
			scanf("%c", array1[i]);
			}
		if(huruf2 = array1[i]){
			scanf("%c", array1[i]);
			}
	}
	if(huruf1 = huruf2){
	printf("%c", &huruf1);
	printf("-");
	printf("%c\n", &huruf2);
	}
	return 0;
}
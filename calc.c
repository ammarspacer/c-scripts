#include <stdio.h>
int main(){
	//Variabel untuk menyimpan nilai 1
	int nilai_1;
	
	//Variabel untuk menyimpan nilai 2
	int nilai_2;
	
	//Variabel untuk menyimpan nilai hasil
	int hasil_tambah;
	int hasil_kali;
	int hasil_kurang;
	int hasil_bagi;
	int hasil_modulus;
	
	printf("Nilai 1: \n");
	scanf("%d", &nilai_1);
	printf("Nilai 2: \n");
	scanf("%d", &nilai_2);
	
	//proses aritmatika
	hasil_tambah = nilai_1 + nilai_2;
	hasil_kali = nilai_1 * nilai_2;
	hasil_kurang = nilai_1 - nilai_2;
	hasil_bagi = nilai_1 / nilai_2;
	hasil_modulus = nilai_1 % nilai_2;
	
	//Menampilkan hasil
	printf("Tambah : %d\n ", hasil_tambah);
	printf("kali : %d\n", hasil_kali);
	printf("hasil kurang : %d\n", hasil_kurang);
	printf("Bagi : %d\n", hasil_bagi);
	printf("Hasil modulus %d\n", hasil_modulus);
	
	return 0;
}
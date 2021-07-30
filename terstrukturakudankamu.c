#include <stdio.h>
typedef struct{
	int usia;
	char kelas;
	float nilai;
}mahasiswa;

int main(){
	mahasiswa aku,dia;
	float rata2;
	
	/*mahasiswa 1*/
	printf("Data mahasiswa 1\n");
	//meminta masukan usia
	printf("masukkan usia:\n");
	scanf("%d", &aku.usia);
	//meminta masukan kelas
	printf("masukkan kelasmu:\n");
	scanf(" %c", &aku.kelas);
	//meminta masukan nilai
	printf("Masukkan nilaimu :*\n");
	scanf("%f", &aku.nilai);
	
	/*mahasiswa 2*/
	printf("Data mahasiswa 2\n");
	//meminta masukan usia
	printf("masukkan usia:\n");
	scanf("%d", &dia.usia);
	//meminta masukan kelas
	printf("masukkan kelasmu:\n");
	scanf(" %c", &dia.kelas);
	//meminta masukan nilai
	printf("Masukkan nilaimu :*\n");
	scanf("%f", &dia.nilai);
	
	//Menampilkan data
	/*mahasiswa 1*/
	printf("Data mahasiswa 1\n");
	printf("Usia:\n");
	printf("%d\n", aku.usia);
	//meminta masukan kelas
	printf("Kelas:\n");
	printf(" %c\n", aku.kelas);
	//meminta masukan nilai
	printf("Nilai:\n");
	printf("%f\n", aku.nilai);
	
	/*mahasiswa 2*/
	printf("Data mahasiswa 1\n");
	printf("Usia:\n");
	printf("%d\n", dia.usia);
	//meminta masukan kelas
	printf("Kelas:\n");
	printf(" %c\n", dia.kelas);
	//meminta masukan nilai
	printf("Nilai:\n");
	printf("%f\n", dia.nilai);
	
	
	//mencari rata-rata
	rata2 = (aku.nilai + dia.nilai)/2;
	printf("rata2 =");
	printf("%.2f", rata2);
	return 0;
}
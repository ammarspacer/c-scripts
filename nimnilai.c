#include <stdio.h>
typedef struct{
	int nim;
	int nilai;
}mahasiswa;


int main(){
	mahasiswa m1;
	mahasiswa m2;
	mahasiswa m3;
	
	printf("Masukkan NIM mahasiswa 1\n");
	scanf("%d", &m1.nim);
	printf("Masukkan nilai Mahasiswa 1\n");
	scanf("%d", &m1.nilai);
	printf("Masukkan NIM mahasiswa 2\n");
	scanf("%d", &m2.nim);
	printf("Masukkan nilai mahasiswa 2\n");
	scanf("%d", &m2.nilai);
	printf("Masukkan NIM mahasiswa 3\n");
	scanf("%d", &m3.nim);
	printf("Masukkan nilai mahasiswa 3\n");
	scanf("%d", &m3.nilai);
	
	if((m1.nilai > m2.nilai) && (m1.nilai > m3.nilai)){
		printf("yang mempunyai nilai terbesar adalah mahasiwa dengan nim %d", m1.nim);
	}else if((m2.nilai > m1.nilai) && (m2.nilai > m3.nilai)){
		printf("yang mempunyai nilai terbesar adalah mahasiwa dengan nim %d", m2.nim);
	}else if((m3.nilai > m1.nilai) && (m3.nilai > m2.nilai)){
		printf("yang mempunyai nilai terbesar adalah mahasiwa dengan nim %d\n", m3.nim);
	}
	
	return 0;
}
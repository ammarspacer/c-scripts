#include <stdio.h>
int main(){
	//deklarasi variabel
	char pilih;
	
	//panduan untuk user
	printf("masukkan menu pilihan anda\n");
	printf("a) program 1\n");
	printf("b) program 2\n");
	
	//meminta 'masukan'
	scanf("%c", &pilih);
	
	switch(pilih){
		case 'a':
			printf("program 1 telah berhasil dijalankan :*\n");
		break;	
		
		case 'b':
			printf("program 2 telah berhasil dilankan :*\n");
		break;
		
		default:
			printf("You choose the wrong thing\n");
		break;
	}
	
	
	return 0;
}
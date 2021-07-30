#include <stdio.h>
int main(){
	
	printf("Masukkan dua buah angka\n");
	
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("Pilihlah menu berikut:\n");
	printf("1. tambah\n");
	printf("2. kurang\n");
	printf("3. Kali\n");
	printf("4. Bagi\n");
	printf("5. Modulus\n");
	int menu;
	scanf("%d", &menu);
	
	switch(menu){
		case 1 : {
			printf("hasil tambah: %d\n", (a+b));
			break;
		}
		case 2 : {
			printf("hasil kurang: %d\n", (a-b));
			break;
		}
		case 3 : {
			printf("hasil kali: %d\n", (a*b));
			break;
		}
		case 4 : {
			printf("hasil bagi: %d\n", (a/b));
		}
		case 5 : {
			printf("hasil modulus: %d\n", (a%b));
		}
		default : {
			printf("Mantan, eh Menu not avalaible\n");
		    break;
		}	
	}
	return 0;
}
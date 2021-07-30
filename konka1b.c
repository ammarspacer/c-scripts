#include <stdio.h>
int main(){
	// menentukan variabel 6 input
	char x1;
	char x2;
	char x3;
	char x4;
	char x5;
	char x6;
	
	//Meminta user memasukkan variabel
	scanf(" %c", &x1);
	scanf(" %c", &x2);
	scanf(" %c", &x3);
	scanf(" %c", &x4);
	scanf(" %c", &x5);
	scanf(" %c", &x6);
	
	//menentukan jumlah input
	int aa=0, bb=0, cc=0, dd=0, ee=0, ff=0;
	
	
	//input pertama1
	if((x1 >= '0') && (x1 <= '9')){
		aa = 1;
	}
	
	//input kedua 1
	if((x2 >= 'a') && (x2 <= 'z')){
		bb = 1;
	}
	
	//input ketiga1
	if((x3 >= '0') && (x3 <= '9')){
		cc = 1;
	}
	
	//input keempat1
	if((x4 >= 'a') && (x4 <= 'z')){
		dd = 1;
	}
	
	//input kelima1
	if((x5 >= '0') && (x5 <= '9')){
		ee = 1;
	}
	
	// input keenam1 
	if((x6 >= 'a') && (x6 <= 'z')){
		ff = 1;
	}
	
	
	
	// memeriksa kevalidan
	if((aa == 1) && (bb == 1) && (cc == 1) && (dd == 1) && (ee == 1) && (ff == 1)){
		printf("kombinasi valid\n");
	}else if((aa == 0) && (bb == 0) && (cc == 0) && (dd == 0) && (ee == 0) && (ff == 0)){
		printf("kombinasi valid\n");
	}else{
		printf("kombinasi tidak valid\n");
	}
	return 0;
}
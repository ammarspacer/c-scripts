#include <stdio.h>
int main(){
	int a, b, c;
	printf("silahkan masukkan ukuran segitiga\n");
	scanf("%d %d %d", &a, &b, &c);
	if((a == b) && (b == c) && (a == c)){
		printf("segitiga sama sisi\n");
	}else if((a == b) && (b != c) && (a != c){
		printf("segitiga sama kaki\n");
	}else if((a != b) && (a != c) && (b != c)){
		printf("segitiga sembarang\n");
	}else if(((a % 3 == 0) && (b % 4 == 0) && (c % 5 == 0)) || ((b % 3 == 0) && (a % 4 == 0) && (c % 5 == 0)))
	
	
	
	
	
}
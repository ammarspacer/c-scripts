#include <stdio.h>
int main(){
	//tiga kotak karakter
	char ca, cb, cc;
	//meminta user memasukkan untuk tiga kotak
	scanf("%c %c %c", &ca, &cb, &cc);
	//membuat 3 kotak integer sebagai penanda
	int a=0, b=0, c=0;
	//periksa konsonan
	if ((ca != 'a') && (ca != 'e') && (ca != 'i') && (ca != 'o') && (ca != 'u')){
		a=1;
	}
	//periksa vokal
	if ((cb == 'a') || (cb == 'e') || (cb == 'i') || (cb == 'o') || (cb == 'u')){
		b=1;
	}
	//periksa konsonan 
	if ((cc != 'a') && (cc != 'e') && (cc != 'i') && (cc != 'o') && (cc != 'u')){
		c=1;
	}
	//memeriksa memenuhi syarat
	if ((a == 1) && (b == 1) && (c == 1)){
		printf("memenuhi syarat\n");
	} else {
		printf("Tidak memenuhi syarat\n");
	}
	return 0;
}
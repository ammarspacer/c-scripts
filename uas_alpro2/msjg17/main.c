#include "head.h"

int main(int argc,char const *argv[]){
	char string[500]; //wadah inputan string
	scanf("%499[^\n]s", &string); //meminta masukan string
	
	int number;
	scanf("%d", &number);
	
	int wordlength = 0;
	
	
	
	
	/*PROSES MENGGUNAKAN MESIN KARAKTER*/
	int vokal = 0;
	int konsonan = 0;
	int angka = 0;
	start(string);//-------->mulai proses mesin karakter
	
	//proses klasifikasi vokal dan konsonan
	while(eop() == 0){
		if(getcc() == 'a' || getcc() == 'i' || getcc() == 'u' || getcc() == 'e' || getcc() == 'o'){
			vokal++;
		}else if(getcc() == '1' || getcc() == '2' || getcc() == '3' || getcc() == '4' || getcc() == '5' ||
		getcc() == '6' || getcc() == '7' || getcc() == '8' || getcc() == '9' || getcc() == '0'){
			angka++;
		}
		else{
			konsonan++;
		}
		adv(string);
	}
	
	printf("\n");
	
	//the amount of consonants and yes if it can divide by the input number and no if it is not
	if(konsonan % number == 0){
		printf("%d yes\n", konsonan);
	}else if(konsonan % number != 0){
		printf("%d no\n", konsonan);
	}
	
	
	//the amount of vocals and yes if it can divide by the input number and no if it is not
	if(vokal % number == 0){
		printf("%d yes\n", vokal);
	}else if(vokal % number != 0){
		printf("%d no\n", vokal);
	}
	
	//the amount of number characters and yes if it can divide by the input number and no if it is not
	if(angka % number == 0){
		printf("%d yes\n", angka);
	}else if(angka % number != 0){
		printf("%d no\n", angka);
	}
	
	/*---------------MESIN KATA------------------*/
	
	STARTKATA(string);
	
	while(EOPKATA == 0){
		INCKATA(string);
		
		KataBanyak(string,number);
	}
	
	
	return 0;
}
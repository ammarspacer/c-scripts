#include "head.h"

void START(char pita[]){ //----->prosedur mesin karakter start
	indeks = 0;
	cc = pita[indeks];
}

void INC(char pita[]){ //----->prosedur mesin karakter INC
	indeks++;
	cc = pita[indeks];
}



char GETCC(){ //----->prosedur mesin karakter GETCC
	return cc;
}

int EOP(){ //----->prosedur mesin karakter EOP
	if(cc == '.'){
		return 1;
	}else{
		return 0;
	}
}

void ADV(char pita[]){ //----->prosedur mesin karakter ADV
	indeks++;
	cc = pita[indeks];
	while((cc == ' ') && (EOP() == 0)){
		indeks++;
		cc = pita[indeks];
	}
}
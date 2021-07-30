#include "head.h"



/*-------------------------------MESIN KARAKTER----------------------------*/

void start(char pita[]){ // mulai mesin
	indeks = 0;
	cc = pita[indeks];
}

void inc(char pita[]){ // next char
	indeks++;
	cc = pita[indeks];
}

void adv(char pita[]){ //next char mengabaikan ' '
	indeks++;
	cc = pita[indeks];

	while((cc == ' ') && (eop() == 0)){
		indeks++;
		cc = pita[indeks];
	}
}

char getcc(){ //mendapatkan char
	return cc;
}

int eop(){ // end of pita
	if(cc == '.'){
		return 1;
	}else{
		return 0;
	}

}


/*------------------------------MESIN KATA---------------------*/
void STARTKATA(char pita[]){ //START MESINKATA
	indeks =0;
	panjangkata = 0;
	
	
	
	while (pita[indeks] == ' '){
		indeks++;
	}

	while((pita[indeks] != ' ') && (pita[indeks] != '.')){
		ckata[panjangkata] = pita[indeks];
		
		indeks++;
		
		panjangkata++;
	}
	
	ckata[panjangkata] = '\0';
}

void RESETKATA(){ //mereset
	panjangkata = 0;
	
	ckata[panjangkata]  = '\0';
} 

void INCKATA(char pita[]){ //INCREMENT KATA
	panjangkata = 0;
	
	while (pita[indeks] == ' ' ){
		indeks++;
	}
	while((pita[indeks] != ' ') &&(pita[indeks] != '.')){
		ckata[panjangkata] = pita[indeks];
		indeks++;
		panjangkata++;
	}
	ckata[panjangkata] = '\0';
}


char* GETCKATA(){
	return ckata;
}

int EOPKATA(char pita[]){ //END OF PITA
	if(pita[indeks] == '.'){
		return 1;
	}else{
		return 0;
	}
}

/*PROSEDUR TAMBAHAN*/
void KataBanyak(char pita[],int number){ //MENYELEKSI OUTPUT JIKA VOKAL LEBIH BESAR DARI NUMBER
	panjangkata = 0;
	int i;
		
	if(strlen(pita) > number){
		for(i=0;i<panjangkata;i++){
			printf("%s", pita[i]);
		}
	} 
}
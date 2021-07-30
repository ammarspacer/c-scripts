#include "head.h"

/*PROSEDUR MEMULAI MESIN KATA*/
void STARTKATA(char pita[]){
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


/*PROSEDUR MENGOSONGKAN PENYIMPAN KATA*/

void RESETKATA(){
	panjangkata = 0;
	
	ckata[panjangkata]  = '\0';
} 

void INCKATA(char pita[]){
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

/*Mendapatkan kata yang telah sedang dibacanya*/
char* GETCKATA(){
	return panjangkata;
}

/*Mendapatkan jumlah karakter pada kata yang telah,sedang dibaca*/
int GETPANJANGKATA(){
	return panjangkata;
}

/*Sinyal tanda selesai pembacaan*/
int EOPKATA(char pita[]){
	if(pita[indeks] == '.'){
		return 1;
	}else{
		return 0;
	}
}

void GETKATAUNIK(int *jmlKata) {
  /******************************************************************
   * statusKata = 0; belum atau tidak terdapat satu pun underscore  *
   * statusKata = 1; terdapat satu buah underscore                  *
   * statusKata >= 2; terdapat minimal dua buah underscore          *
   ******************************************************************/
  int statusKata = 0;
  int indeks_karakter = 0;
  while (indeks_karakter < GETPANJANGKATA()) {
    if (GETCKATA()[indeks_karakter] == '_') {
      statusKata++;
    }

    indeks_karakter++;
  }

  if (statusKata >= 2) {
    *jmlKata = *jmlKata + 1;
  }
}





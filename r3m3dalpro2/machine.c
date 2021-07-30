#include "head.h"

void STARTKATA(char pita[]){ // pemanggil penyala mesin kata
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
/*Mendapatkan kata yang telah sedang dibacanya*/
char* GETCKATA(){
	return ckata;
}
/*Sinyal tanda selesai pembacaan*/
int EOPKATA(char pita[]){
	if(pita[indeks] == '.'){
		return 1;
	}else{
		return 0;
	}
}
/*maju 1 kata*/
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
/*menghitung jumlah vokal dan konsonan*/
void count(char pita[]){
	STARTKATA(pita);
	
	
	
	int huruf,angka,i,j;
	int jkata;
	
	huruf == angka == i == 0;
	
	printf("%s\n", GETCKATA());
	
	
	
	while(EOPKATA(pita) == 0){
		jkata++;
		INCKATA(pita);
		printf("%s\n", GETCKATA());
		
		/*
		}*/	
	}
	
	if(GETPANJANGKATA() > 0){
		jkata++;
	}
	
	printf("%d", jkata);
	
	
}
/*Mendapatkan jumlah karakter pada kata yang telah,sedang dibaca*/
int GETPANJANGKATA(){
	return panjangkata;
}

/*prosedur quick sort
void quickSort(int jmlkata, int n, char ckata[]){ // l = left pivot, r = Right Pivot! L = 0, R = n-1!

	int i, j;
	int l;
	char temp_v1[50];
	char temp_v2[50];
	char temp_v3[50];
	l = 0;
	i = l;
	j = jmlkata;

	do{

		while(ckata[i]< ckata[j]) && (i <= j)){

			/*mencegah i berjalan terlalu jauh melewati batas j*/

	/*		i = i + 1;

		}

		while((ckata[j] > ckata[l]) && (i <= j)){

			/*mencegah i berjalan terlalu jauh melewati batas i*/

	/*		j = j - 1;

		}

	/*	if(i < j){
			
			temp_v1 = merge[i].value1;
			temp_v2 = merge[i].value2;
			temp_v3 = merge[i].value3;

			merge[i].value1 = merge[j].value1;
			merge[i].value2 = merge[j].value2;
			merge[i].value3 = merge[j].value3;
			
			merge[j].value1 = temp_v1;
			merge[j].value2 = temp_v2;
			merge[j].value3 = temp_v3;

			i += 1;
			j -= 1;
		}		

	}while(i < j);

	// tulis();

	if(l < j){
		quickSort(l,j,n,merge);
	}
	
	if(i < r){
		quickSort(i,r,n,merge);
	}

}*/
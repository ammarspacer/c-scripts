#include <stdio.h>
#include <string.h>

int main(){
	int n; //banyaknya string
	int i,j; //iterasi
	
	int ketemu = 0; //penanda
	
	scanf("%d", &n); //meminta input banyak array
	
	char arr_str[n][50]; //Array of String
	
	for(i=0; i<n ; i+=1){ //meminta input string
		scanf("%s",&arr_str[i]);
	}
	
	//akan terus mengecek semua kata bila belum ditemukan kata alay
	//dan i masih lebih kecil dari n
	
	i=0;
	while(ketemu==0 && i<n){
		j=0;
		//loop akan terus mengecel tiap huruf bila belum ditemukan angka
		//dan j masih lebih kecil dari panjang arr_str ke i
		while(j<strlen(arr_str[i]) && ketemu==0){
			if(arr_str[i][j] == '0' || arr_str[i][j] == '1' ||
			arr_str[i][j] == '2' || arr_str[i][j] == '3' ||
			arr_str[i][j] == '4' || arr_str[i][j] == '5' ||
			arr_str[i][j] == '6' || arr_str[i][j] == '7' ||
			arr_str[i][j] == '8' || arr_str[i][j] == '9'){
				ketemu=1;
			}
			j+=1;
		}
		i+=1;
	}
	
	//menampilkan hasil
	if(ketemu==1){
		printf("m0n1 m0r14r7y 4llay\n");
	}else{
		printf("you are a normal person\n");
	}
	
	
	return 0;
}
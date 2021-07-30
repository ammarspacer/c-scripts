#include <stdio.h>
int main(){
	/* Memasukkan perintah*/
	printf("Masukkan nilaimu :*\n");	
	
	/*User memasukkan nilai*/
	int nilai;
	scanf("%d", &nilai);
	
	/*Output jika nilai sama dengan KETENTUAN*/	
	if(nilai >= 80){
		printf("Edan dapet nilai A\n");
	}else if((nilai < 80) && (nilai >= 75)){
		printf("Sing dapet nilai A\n");
		printf("A-\n");
	}else if((nilai < 75) && (nilai >= 70)){
		printf("Keren dapat B+, lain kali A- ya\n");
	}else if((nilai < 70) && (nilai >= 60)){
		printf("Hebat dapat B-, ayo mangat gan\n");
	}else if((nilai < 60) && (nilai >= 55)){
		printf("C+ anda cukup baik\n");
	}else if((nilai < 55) && (nilai >= 50)){
		printf("C anda cukup baik\n");
	}else if((nilai < 50) && (nilai >= 40)){
		printf("Hmm D, ayo kamu harus bisa\n");
	}else{
	    printf("Maaf anda kurang beruntung\n");
	}
	
	return 0;
}
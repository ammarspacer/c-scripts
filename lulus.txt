#include <stdio.h>
int main(){
	/* Memasukkan perintah*/
	printf("Masukkan nilaimu :*\n");	
	
	/*User memasukkan nilai*/
	int nilai;
	scanf("%d", &nilai);
	
	/*Output jika nilai lebih besar sama dengan KETENTUAN*/	
	if(nilai >= 65){
		printf("Ciee yg lulus\n");
	}else{
	    printf("Maaf anda kurang beruntung\n");
	}
	return 0;
	
}
#include <stdio.h>
#include <string.h>

int main(){
	char nama_depan1[50];
	char nama_depan2[50];
	char nama_belakang1[50];
	char nama_belakang2[50];
	
	scanf("%s %s", &nama_depan1, &nama_belakang1);
	scanf("%s %s", &nama_depan2, &nama_belakang2);
	
	//Orang Pertama
	char vok_depan1[50];
	char kon_depan1[50];
	
	int i;
	
	int vok1=0;
	int kon1 = 0;
	
	for(i=0;i<strlen(nama_depan1);i++){
	if((nama_depan1[i] == 'a') || (nama_depan1[i] == 'A') || (nama_depan1[i] == 'i') || (nama_depan1[i] == 'I') || (nama_depan1[i] == 'u')
			|| (nama_depan1[i] == 'U') || (nama_depan1[i] == 'e') || (nama_depan1[i] == 'E') || (nama_depan1[i] == 'o') || (nama_depan1[i] == 'O')){
				 vok_depan1[i] = nama_depan1[i];
				 vok1++;
			}
	else{
			kon_depan1[i] = nama_depan1[i];
			kon1++;
		}
	}
	
	char vok_belakang1[50];
	char kon_belakang1[50];
	
	
	int vok2=0;
	int kon2=0;
	
	for(i=0;i<strlen(nama_belakang1);i++){
	if((nama_belakang1[i] == 'a') || (nama_belakang1[i] == 'A') || (nama_belakang1[i] == 'i') || (nama_belakang1[i] == 'I') || (nama_belakang1[i] == 'u')
			|| (nama_belakang1[i] == 'U') || (nama_belakang1[i] == 'e') || (nama_belakang1[i] == 'E') || (nama_belakang1[i] == 'o') || (nama_belakang1[i] == 'O')){
				 vok_belakang1[i] = nama_belakang1[i];
				 vok2++;
			}
	else{
			kon_belakang1[i] = nama_belakang1[i];
			kon2++;
		}
	}

	//Orang kedua
	char vok_depan2[50];
	char kon_depan2[50];
	
	
	int vok3=0;
	int kon3 = 0;
	
	for(i=0;i<strlen(nama_depan2);i++){
	if((nama_depan2[i] == 'a') || (nama_depan2[i] == 'A') || (nama_depan2[i] == 'i') || (nama_depan2[i] == 'I') || (nama_depan2[i] == 'u')
			|| (nama_depan2[i] == 'U') || (nama_depan2[i] == 'e') || (nama_depan2[i] == 'E') || (nama_depan2[i] == 'o') || (nama_depan2[i] == 'O')){
				 vok_depan2[i] = nama_depan2[i];
				 vok3++;
			}
	else{
			kon_depan2[i] = nama_depan2[i];
			kon3++;
		}
	}
	
	char vok_belakang2[50];
	char kon_belakang2[50];
	
	
	int vok4=0;
	int kon4=0;
	
	for(i=0;i<strlen(nama_belakang2);i++){
	if((nama_belakang2[i] == 'a') || (nama_belakang2[i] == 'A') || (nama_belakang2[i] == 'i') || (nama_belakang2[i] == 'I') || (nama_belakang2[i] == 'u')
			|| (nama_belakang2[i] == 'U') || (nama_belakang2[i] == 'e') || (nama_belakang2[i] == 'E') || (nama_belakang2[i] == 'o') || (nama_belakang2[i] == 'O')){
				 vok_belakang2[i] = nama_belakang2[i];
				 vok4++;
			}
	else{
			kon_belakang1[i] = nama_belakang1[i];
			kon4++;
		}
	}

	if((vok1 == vok3) && (kon2 == kon4)){
		printf("KUA yuk\n");
	}else{
		printf("dadah :)\n");
	}
	
	return 0;
}
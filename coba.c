#include <stdio.h>

int main(){
	char nama[255];
	int JJK;
	float lembur;
	float upah;
	
	scanf("%s", &nama);
	scanf("%d", &JJK);
	
	if(JJK <= 48){
		upah = JJK * 2000;
	}else{
		lembur = JJK - 48;
		upah = (48 * 2000) + (JJK*3000);
	}
		
	printf("%d", upah);
	
	
	return 0;
}
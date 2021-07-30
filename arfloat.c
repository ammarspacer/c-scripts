//(Float di - depan)*10+0.05

#include <stdio.h>

int main(){
	float fb[3];
	int ang[3];
	
	int i;
	
	for(i=0;i<3;i++){
		scanf("%f", &fb[i]);
	}
	
	for(i=0;i<3;i++){
		scanf("%d", &ang[i]);
	}
	
	
	int angkadepankoma[3] = {0, 0, 0};
	
	
	
	for(i=0;i<3;i++){		//FBI :V
		angkadepankoma[i] = (fb[i] * 100)/100;
	}
	
	int angkabelakangkoma[3] = {0,0,0};
	
	
	for(i=0;i<3;i++){
		angkabelakangkoma[i] = ((fb[i] * 100) - (angkadepankoma[i] * 100)) + 0.001;
	}
	
	int cek = 0;
	
	for(i=0;i<3;i++){
		if(angkabelakangkoma[i] % ang[0]==0){
			cek+=1;
		}else if(angkabelakangkoma[i] % ang[1]==0){
			cek+=1;
		}else if(angkabelakangkoma[i] % ang[2] == 0){
			cek+=1;
		}
		
		if(angkadepankoma[i] % ang[0]==0){
			cek+=1;
		}else if(angkadepankoma[i] % ang[1]==0){
			cek+=1;
		}else if(angkadepankoma[i] % ang[2] == 0){
			cek+=1;
		}
		
		
	}
	

	
	
	
	
	
	
	/*if(((cek1 == 1) && (cek2 == 1)) || ((cek1 == 1) && (cek3 == 1))
		 || ((cek2 == 1) && (cek3 == 1))) {
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}*/
	
	return 0;
}
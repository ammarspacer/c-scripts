#include <stdio.h>

int CariFPB(int a, int b){
	if(b == 0){
		return a;
	}else{
		int temp = a % b;
		return CariFPB(b,temp);
	}
}



int main(){
	int hasil = CariFPB(12,18);
	printf("hasil FPB = %d\n", hasil);
	return 0;
}
#include <stdio.h>

int faktorial(int n){
	printf("n = %d\n", n);
	if(n == 0){
		return 0;
	}else if(n == 1){
		return 1;
	}else{
		return (n + faktorial(n-1));
	}
}



int main(){
	int hasil = faktorial(3);
	printf("hasil faktorial adalah %d\n", hasil);
	return 0;
}
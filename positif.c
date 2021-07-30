#include <stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	if(x>=0){
		printf("angka %d bernilai positif\n", x);
	}else{
		printf("angka %d bernilai negatif\n", x);
	}
	return 0;
}
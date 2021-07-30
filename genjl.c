#include <stdio.h>
int main(){
	int y; scanf("%d", &y);
	if (y%2==0){
		printf("angka ini genap dan");
		if(y%4==0){
			printf("merupakan kelipatan 4\n");
		}else{
			printf("bukan kelipatan 4\n");
		}
	}else{
		printf("angka ini ganjil dan");
		if(y%3==0){
			printf("merupakan kelipatan 3\n");
		}else{
			printf("bukan kelipatan 3\n");
		}
	}
	return 0
	
	
	
	
	
	
	
	
}
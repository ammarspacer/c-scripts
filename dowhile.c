#include <stdio.h>

int main(){
	char c;
	
	do{
		printf("apakah kau mau menikah denganku? (y/t)\n");
		scanf(" %c", &c);
	}while(c == 't');
	
	return 0;
}
#include <stdio.h>

int main(){
	char ch;
	
	printf("Input a char\n");
	scanf("%c", &ch);
	
	switch(ch){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'u':
		case 'U':
		case 'o':
		case 'O':
		printf("%c is a vowell.\n", ch);
		break;
		default:
		printf("%c is not a vowell.\n", ch);
	}
	
	
	
	
	return 0;
}
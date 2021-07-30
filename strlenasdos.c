#include <stdio.h>
#include <string.h>
int main(){
	char String1[5]="DULZ";
	char String2[5]={'D', 'U', '\0', 'L', 'Z'};
	char String3[50];
	int str1=strlen(String1);
	int str2=strlen(String2);
	scanf("%s", String3);
	
	printf("panjang string pertama %d\n", str1);
	printf("panjang string kedua %d\n", str2);
	printf("panjang string ketiga %d\n", strlen(String3));
	printf("dan cinta lainnya\n");
	return 0;
}
#include <stdio.h>
#include <string.h>
int main(){
	char String1[50];
	char String2[50];
	char String3[50];
	
	scanf("%s", String1);
	//string1=string2;
	strcpy(String2,String1);
	//string3="SalinAku"
	strcpy(String3,"SalinAku");
	
	printf("string pertama %s\n", String1);
	printf("string kedua %s\n", String2);
	printf("string ketiga %s\n", String3);
	printf("dan cinta lainnya\n");
	return 0;
}
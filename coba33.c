#include <stdio.h>
#include <string.h>
int main(){
	char String1[50];
	char string2[50];
	strcpy(string2, "");
	do{
		scanf("%s", &String1);
		if((strlen(String1) > strlen(string2)) && (strcmp(String1, "cukup") != 0)){
			strcpy(string2, String1);
		}
	}while(strcmp(String1, "cukup") != 0);
	
	printf("=========\n");
	printf("%s\n", string2);
	return 0;
}
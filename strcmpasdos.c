#include <stdio.h>
#include <string.h>
int main(){
	char String1[50];
	char String2[50];
	char String3[50];
	
	scanf("%s", String1);
	scanf("%s", String2);
	int compare=strcmp(String1, String2);
	if(compare==0){
		printf("kedua string sama\n");
	}
	if(strcmp(String1, String2)==0){
		printf("kedua string memang sama\n");
	}
	do{
		printf("input lagi\n");
		scanf("%s", &String3);
	}while(strcmp(String3, "stop")!=0);
	return 0;
}
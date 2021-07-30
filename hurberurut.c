#include <stdio.h>
#include <string.h>
int main(){
	char arrofchar[50];
	int x, i, counter=0;
	char y;
	scanf("%d", &x);
	
	for(i = 0; i < x; i++){
		scanf(" %c", &y);
		arrofchar[counter]=y;
		counter++;
	}
	arrofchar[x]='\0';
	
	printf("%s\n", arrofchar);
	return 0;
}
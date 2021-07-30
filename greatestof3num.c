#include <stdio.h>

void main(){
	int a,b,c;
	printf("enter any three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
		printf("greatest number is: %d", a);
	}else if(b>c){
		printf("greatest number is: %d", b);
	}else{
		printf("greatest number is: %d", c);
	}
	
	
	
}
#include <stdio.h>

int main(){
	float vol, pie=3.14;
	float r,h;
	
	printf("ENTER THE VALUE O RADIOUS:");
	scanf("%f", &r);
	printf("ENTER THE VALUE OF HEIGHT:");
	scanf("%f", &h);
	
	vol = pie * r * r * h;
	printf("VOLUME OF CYLINDER IS:%3.2f",vol);
	
	return 0;
}
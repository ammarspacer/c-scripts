#include <stdio.h>
int main(){
	float c1, c2, c3;
	int c4;
	scanf("%f %f %f", &c1, &c2, &c3);
	scanf("%d", &c4);
	
	printf("%f %f %f ", c1, c2, c3);
	int a, b, c;
	a = c1; 
	b = c2;
	c = c3;
	printf("%d %d %d", a, b, c);
	
	c1= (c1 - a) * 100;
	c2= (c2 - b) * 100;
	c3= (c3 - c) * 100;
	
	printf("%f %f %f ", c1, c2, c3);
	
	
	
	return 0;
}
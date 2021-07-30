#include <stdio.h>
typedef struct{
	int gehu;
	int bala2;
	int pisgor;
	int cireng;
	int total;
}engkus;


int main(){
	int g, b2, pg, c, hr;
	scanf("%d", &g);
	scanf("%d", &b2);
	scanf("%d", &pg);
	scanf("%d", &c);
	scanf("%d", &hr);
	
	engkus laba;
	
	laba.gehu = 100*g*hr;
	laba.bala2 = 150*b2*hr;
	laba.pisgor = 75*pg*hr;
	laba.cireng = 175*c*hr;
	
	laba.total = laba.gehu + laba.bala2 + laba.pisgor + laba.cireng;
	
	printf("%d\n", laba.total);
	
	return 0;
}
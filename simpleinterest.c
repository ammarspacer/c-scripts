#include <stdio.h>

int main(){
	int amount, rate, time, ans;
	
	printf("\nEnter Principal Amount:");
	scanf("%d", &amount);
	
	printf("\nEnter Rate of Interest:");
	scanf("%d", &rate);
	
	printf("\n Enter Period of Time:");
	scanf("%d", &time);
	
	ans= (amount *rate*time)/100;
	/*Simple interest formula*/
	printf("\nSimple Interest:%d",ans); 
	return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
	float radius,pie,volume;
	pie = 3.1416;
	
	printf("Enter the radius:");
	if(scanf("%f",&radius)==1){
		volume = (4/3)*pie*pow(radius,3);
		printf("The volume is:%6.2f",volume);
	}else{
		printf("error, enter the correct value");
	}
	
	
	return 0;
}
#include <stdio.h>

int main(){
	int n,sum = 0, remainder;
	
	printf("Enter an integer\n");
	scanf("%d", &n);
	
	while(n != 0){
		remainder = n % 10;
		/*stores unit pplace digit to remainder*/
		sum = sum + remainder;
		n = n / 10;
		/*dividing no to discard unit place digit*/
	}
	
	printf("Sum of digits of entered number = %d\n", sum);
	
	
	
	return 0;
}
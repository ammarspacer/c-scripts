#include "head.h"
/*int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}*/

typedef struct{ //
	long b;	//biner
	int d; //decimal
}tipe;


int main(){
	
	int x;
	char type1;
	
	tipe tipe1;
	int i;
	scanf("%d %c", &x, &type1);
	
	switch(type1){
		case 'D':
		for(i=0;i<x;i++){
			scanf("%d", &tipe1.d);
		}
		break;
		case 'B':
		for(i=0;i<x;i++){
			scanf("%ld", &tipe1.b);
		}
		break;
		default:
		break;
	}
	
	tipe tipe2;
	char type2;
	int y;
	scanf("%d %c", &y, &type2);
	switch(type2){
		case 'D':
		for(i=0;i<x;i++){
			scanf("%d", &tipe2.d);
		}
		break;
		case 'B':
		for(i=0;i<x;i++){
			scanf("%ld", &tipe2.b);
		}
		break;
		default:
		break;
	}
	
	int z;
	char type3;
	tipe tipe3;
	scanf("%d %s", &z, &type3);
	switch(type3){
		case 'D':
		for(i=0;i<x;i++){
			scanf("%d", &tipe3.d);
		}
		break;
		case 'B':
		for(i=0;i<x;i++){
			scanf("%ld", &tipe3.b);
		}
		break;
		default:
		break;
	}
	
	char output[20];
	
	scanf("%s", &output);
	
	printf("\n");
  return 0;
}
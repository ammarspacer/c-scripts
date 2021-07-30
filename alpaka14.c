#include <stdio.h>

int main(){
	char hur1 = '0', hur2 = '0', hur3 = '0';
	char ang1 = '0', ang2 = '0', ang3 = '0';
	int jumchar = 0, jumang = 0;
	int i;
	char input[6];
	
	scanf("%c %c %c %c %c %c", &input[0],&input[1],&input[2],&input[3],&input[4],&input[5]);
	
	for(i=0;i<6;i++){
		if((input[i] >= 'a') && (input[i] <= 'z')){
			jumchar++;
			if(hur1 == '0'){
				hur1 = input[i];
			}else if(hur2 == '0'){
				hur2 = input[i];
			}else if(hur3 == '0'){
				hur3 = input[i];
			}
		}else if((input[i] >= '0') && (input[i] <='9')){
			jumang++;
			if(ang1 == '0'){
				ang1 = input[i];
			}else if(ang2 == '0'){
				ang2 = input[i];
			}else if(ang3 == '0'){
				ang3 = input[i];
			}
		}
	}
	
	if((jumchar == 3) && (jumang == 3)){
		printf("%c\n", hur1);
		printf("%c\n", ang1);
		printf("%c\n", hur2);
		printf("%c\n", ang2);
		printf("%c\n", hur3);
		printf("%c\n", ang3);
	}else{
		printf("tidak valid\n");
	}
	
	return 0;
}
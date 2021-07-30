#include "machine.c"

int main(){
	char pita[50];
	int vokal = 0, konso = 0;
	
	//input
	printf("Input : ");
	scanf("%49[^\n]s", &pita);
	
	//mulai proses mesin karakter
	START(pita);
	printf("Output INC : %c", GETCC());
	
	//lanjut proses
	while(EOP() == 0){
		if(GETCC() == 'a' || GETCC() == 'i' || GETCC() == 'u' || GETCC() == 'e' || GETCC() == 'o'){
			vokal++;
		}else{
			konso++;
		}
		
		if(GETCC() != '.'){
			printf("%c", GETCC());
		}
		INC(pita);
	}
	printf("\n");
	printf("Vokal INC : %d\n", vokal);
	printf("Konsonan INC : %d\n", konso);
	
	//reset counter
	vokal = 0;
	konso = 0;
	
	START(pita);
	
	
	//lanjut proses
	while(EOP() == 0){
		if(GETCC() == 'a' || GETCC() == 'i' || GETCC() == 'u' || GETCC() == 'e' || GETCC() == 'o'){
			vokal++;
		}else{
			konso++;
		}
		if(GETCC() != '.'){
			printf("%c", GETCC());
		}
		ADV(pita);
	}
	printf("\n");
	printf("Vokal INC : %d\n", vokal);
	printf("Konsonan INC : %d\n", konso);
	
	return 0;
}
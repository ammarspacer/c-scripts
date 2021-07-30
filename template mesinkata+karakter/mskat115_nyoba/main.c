#include "machine.c"

int main(int argc,char const *argv[]){
	char pita[300];
	scanf("%299[^\n]s", pita);
	
	int jumlahKata=0;
	
	STARTKATA(pita);
	GETKATAUNIK(&jumlahKata);
	
	while(EOPKata(pita) == 0){
		INCKATA(pita);
		
		GETKATAUNIK(&jumlahKata);
	}
	
	printf("%d\n", jumlahKata);
	
	
	return 0;
}
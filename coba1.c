#include <stdio.h>
int main (){
	int sec,jam,menit,detik;
	
	int jumlah_lagu;
	jumlah_lagu= 'n';
	printf("m*n")
	scanf("%d%d%d", &menit, &sec, &jumlah_lagu);
	
	
	jam= sec / (60*60);
	sec= sec-((60*60)*jam);
    menit= sec / 60;
    sec= sec - (60*menit);
	sec= (sec*n);
	
	printf("%d:%d:%d", jam,menit,sec);	
	return 0;
	
	
}
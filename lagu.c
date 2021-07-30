#include <stdio.h> 
int main(){
	/* Saya [AMMAR ASHSHIDDIQI] 
	mengerjakan evaluasi [TUGAS MANDIRI 1] 
	dengan mata kuliah [ALGORITMA DAN PEMROGRAMAN 1] 
	untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang sudah dispesifikasikan.
	Aamin//
	*/
	int mnt, sec, kali;
	scanf("%d", &mnt);
	scanf("%d", &sec);
	scanf("%d", &kali);
	
	int ab;
	ab = (mnt*60 + sec)*kali;

	int jam;
	jam= (ab)/3600;
	
	int ac;
	ac = ab - (3600*jam);
	
	int ad;
	ad= ac / 60;
	
	int ae ;
	ae = ac - (60*ad);
	
	
	printf("%d:%d:%d\n", jam, ad, ae);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
#include <stdio.h>

int main(){
	int n;//domba garut jantan
	int m; //domba garut betina
	int p; //domba garut kecil
	int a; //waktu domba jantan masuk kandang
	int b; //waktu domba betina masuk kandang
	int c; //waktu anak domba masuk kandang
	
	scanf("%d", &n); //ngescan jumlah jantan
	scanf("%d", &m); //ngescan jumlah betina
	scanf("%d", &p); //ngescan jumlah anak domba
	scanf("%d", &a); //ngescan lama jantan masuk
	scanf("%d", &b); //ngescan lama betina masuk
	scanf("%d", &c); //ngescan lama anak masuk
	
	int waktutot; //waktu total
	
	waktutot = ((n*a) + (m*b) + (p*c));
	
	int jamtot = 00;
	int menittot = 00;
	int detiktot = 00;
	
	jamtot = waktutot / 60;
	menittot = waktutot - (jamtot * 60);
	
	printf("%02d:%02d:%02d\n", jamtot,menittot,detiktot);
	
	return 0;
}
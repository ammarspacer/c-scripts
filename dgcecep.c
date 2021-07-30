#include <stdio.h>

int main(){
	int n,m,p,r;
	scanf("%d", &n); //jumlah awal domba garut
	scanf("%d", &m); // setiap dua ekor domba menghasilkan m ekor anak dalam setahun
	scanf("%d", &p); //p ekor domba yang dijual
	scanf("%d", &r); //tahun ke-r
	
	// baru bisa dijual setelah tahun ke 2 (mulai tahun ke- 3).
	//maka:
	int jumlah_domba;
	
	//jika r kurang dari 3
	if(r<=3){
		jumlah_domba =  n*m*r;
	}else if(r>3){//jika r>=3
		jumlah_domba = ((n+(m*r)) - p*(r-2));
	}
	
	printf("%d\n", jumlah_domba); //menampilkan jumlah domba
	
	return 0;
}

//Created by bilkw
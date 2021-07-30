#include <stdio.h>




int main(){
	float rata2;
	int N;
	
	printf("Jumlah peserta ujian: "); scanf("%d", &N);

	hitungRata2(N, rata2);
	if (rata2 <= 50}{
		printf("Nilai rata-rata peserta ujian kirang alus\n");
	}else{
		printf("Nilai rata-rata peserta ujian alus\n");
	}
  return 0; 
}





void hitungRata2{int N, float u}{
	float x;
	int i;
	float jumlah;
	
	jumlah = 0;
	for(i=1;i<=N;i++){
		printf("x : "); scanf("%d", &x);
		jumlah = jumlah + x;
	}
	u = jumlah / N;
}

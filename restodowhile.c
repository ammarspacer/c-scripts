#include <stdio.h>

int main(){
	int total=0, x;
	printf("====Selamat Datang Di WarTeg GIK UPI====\n");
	do{
		printf("Mau makan apa Mas/Mba?\n");
		printf("1. Soto 10000\n");
		printf("2. Nasi Goreng 11000\n");
		printf("3. One slice of Pizza 15000\n");
		printf("4. Beef Burger with Cheese (ni geleuh) 20000\n");
		printf("5. Boiled Vegetable with Peanut Sauce 20000\n");
		printf("6. Nasgor + Soybean saus 8000\n");
		printf("Slahkan ketik pesanan anda(0 untuk berhenti) :");
		scanf("%d", &x);
		if (x==1){
			total+=10000;
		}else if(x==2){
			total+=11000;
		}else if(x==3){
			total+=15000;
		}else if(x==4){
			total+=20000;
		}else if(x==5){
			total+=20000;
		}else if(x==6){
			total+=8000;
		}else if(x==7){
			printf("IUK Harap dibayar!!! jangan abaikan saya! HEY KAMU!\n");
		}else if(x!=0){
			printf("pesanan tidak ada\n");
		}	
	}while(x!=0);
	printf("Total yg hrs dibayar: Rp. %d,00\n", total);
	
	return 0;
}
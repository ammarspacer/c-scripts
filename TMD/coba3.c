#include <stdio.h>
#include <string.h>

void baris1(int angk1,int angk2,char operasi[50], int ketebalan){
	int i,j;
	int sat1 = 0;
	int pul1 = 0;
	int rat1 = 0;
	
	if(angk1>=100 && angk1<1000){
		rat1 = angk1/100;
		pul1 = (angk1 - rat1 * 100) / 10;
		sat1 = ( angk1 - rat1 * 100 - pul1 * 10);
	}else if(angk1>=10 && angk1<100){
		pul1 = angk1/10;
		sat1 = angk1 - pul1*10;
	}else if(angk1>=0 && angk1<10){
		sat1 = angk1;
	}
	
	if(angk1>=100 && angk1<1000){
		if((rat1 == 2) || (rat1 == 3) || (rat1 == 5) ||(rat1 == 6) || (rat1 == 8) || (rat1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}	
		else if(rat1 == 7){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
					
		}
		
		
	if((pul1 == 0) || (pul1 == 2) || (pul1 == 3) || (pul1 == 5) || (pul1 == 6) || (pul1 == 8) || (pul1 == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if((pul1 == 1) || (pul1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if(pul1 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		
		if((sat1 == 0) || (sat1 == 2) || (sat1 == 3) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if((sat1 == 1) || (sat1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if(sat1 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
		
	}
	
	
	if(angk1>=10 && angk1<100){
		
		if((pul1 == 2) || (pul1 == 3) || (pul1 == 5) || (pul1 == 6) || (pul1 == 8) || (pul1 == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if((pul1 == 1) || (pul1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if(pul1 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		
		if((sat1 == 0) || (sat1 == 2) || (sat1 == 3) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				
		}else if((sat1 == 1) || (sat1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if(sat1 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
		
	}
	
	if(angk1>=1 && angk1<10){
				
		
		if((sat1 == 0) || (sat1 == 2) || (sat1 == 3) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if((sat1 == 1) || (sat1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if(sat1 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
		
	}
	
	if((strcmp(operasi,"tambah") == 0) || (strcmp(operasi,"kali") == 0)||(strcmp(operasi,"bagi") == 0)||(strcmp(operasi,"kurang") == 0)){
			for(j=0;j<ketebalan;j++){
				printf("_");
			}
			for(j=0;j<ketebalan;j++){
				printf("_");
			}
			for(j=0;j<ketebalan;j++){
				printf("_");
			}

			
	}
	
	int sat2 = 0;
	int pul2 = 0;
	int rat2 = 0;
	
	if(angk2>=100 && angk2<1000){
		rat2 = angk2/100;
		pul2 = (angk2 - rat2 * 100) / 10;
		sat2 = ( angk2 - rat2 * 100 - pul2 * 10);
	}else if(angk2>=10 && angk2<100){
		pul2 = angk2/10;
		sat2 = angk2 - pul1*10;
	}else if(angk2>=0 && angk2<10){
		sat2 = angk2;
	}
	
	if(angk2>=100 && angk2<1000){
		if((rat2 == 2) || (rat2 == 3) || (rat2 == 6) || (rat2 == 5) || (rat2 == 8) || (rat2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}	
		else if(rat2 == 7){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
					
		}
		
		
		if((pul2 == 0) || (pul2 == 2) || (pul2 == 3) || (pul2 == 5) || (pul2 == 6) || (pul2 == 8) || (pul2 == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if((pul2 == 1) || (pul2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if(pul2 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		
		if((sat2 == 0) || (sat2 == 2) || (sat2 == 3) || (sat2 == 5) || (sat2 == 6) || (sat2 == 8) || (sat2 == 9)) {
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if((sat2 == 1) || (sat2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if(sat2 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}	
		
	}
	
	
	if(angk2>=10 && angk2<100){
		
		if((pul2 == 2) || (pul2 == 3) || (pul2 == 5) || (pul1 == 6) || (pul1 == 8) || (pul1 == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if((pul2== 1) || (pul2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if(pul2 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		
	if((sat2 == 0) || (sat2 == 2) || (sat2 == 3) || (sat2 == 5) || (sat2 == 6) || (sat2 == 8) || (sat2 == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if((sat2 == 1) || (sat2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if(sat2 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
		
	}
	
	if(angk2>=1 && angk2<10){
				
		
		if((sat2 == 0) || (sat2 == 2) || (sat2 == 3) ||(sat2 == 5) || (sat2 == 6) || (sat2 == 8) || (sat2 == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if((sat2 == 1) || (sat2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if(sat2 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
	}
	
	int hasil;
	
	if(strcmp(operasi, "tambah") == 0){
		hasil = angk1 + angk2;
	}else if(strcmp(operasi, "kali") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "bagi") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "kurang") == 0){
		hasil = angk1 - angk2;
	}
	
	int rathas = 0;
	int pulhas = 0;
	int sathas = 0;
	
	if(hasil>=100 && angk1<1000){
		rathas = hasil/100;
		pulhas = (hasil - rathas * 100) / 10;
		sathas = ( hasil - rathas * 100 - pulhas * 10);
	}else if(hasil>=10 && hasil<100){
		pulhas = hasil/10;
		sathas = hasil - pulhas*10;
	}else if(hasil>=0 && hasil<10){
		sathas = hasil;
	}
	
	if(hasil>=100 && hasil<1000){
		if((rathas == 2) || (rathas == 3) || (rathas == 5) || (rathas == 6) || (rathas == 8) || (rathas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}	
		else if(rathas == 7){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
					
		}
		
		
		if((pulhas == 0) || (pulhas == 2) || (pulhas == 3) || (pulhas == 5) || (pulhas == 6) || (pulhas == 8) || (pulhas == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if((pulhas == 1) || (pulhas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if(pulhas == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		
		if((sathas == 0) || (sathas == 2) || (sathas == 3) || (sathas == 5) || (sathas == 6) || (sathas == 8) || (sathas == 9)) {
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if((sathas == 1) || (sathas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if(sathas == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}	
		printf("\n");
	}
	
	
	if(hasil>=10 && hasil<100){
		
		if((pulhas == 2) || (pulhas == 3) || (pulhas == 5) || (pulhas == 6) || (pulhas == 8) || (pulhas == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if((pulhas== 1) || (pulhas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}else if(pulhas == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		
		if((sathas == 0) || (sathas == 2) || (sathas == 3) || (sathas == 5) || (sathas == 6) || (sathas == 8) || (sathas == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if((sathas == 1) || (sathas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if(sathas == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
		printf("\n");
	}
	
	if(hasil>=1 && hasil<10){
				
		
		if((sathas == 0) || (sathas == 2) || (sathas == 3) || (sathas == 5) || (sathas == 6) || (sathas == 8) || (sathas == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if((sathas == 1) || (sathas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}else if(sathas == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
		printf("\n");
	}
	
	
	
}


void baris2(int angk1,int angk2,char operasi[50], int ketebalan){
	int i,j;
	int sat1 = 0;
	int pul1 = 0;
	int rat1 = 0;
	
	if(angk1>=100 && angk1<1000){
		rat1 = angk1/100;
		pul1 = (angk1 - rat1 * 100) / 10;
		sat1 = ( angk1 - rat1 * 100 - pul1 * 10);
	}else if(angk1>=10 && angk1<100){
		pul1 = angk1/10;
		sat1 = angk1 - pul1*10;
	}else if(angk1>=0 && angk1<10){
		sat1 = angk1;
	}
	
	if(angk1>=100 && angk1<1000){
		if((rat1 == 1) || (rat1 == 2) || (rat1 == 3) || (rat1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		else if((rat1 == 0) || (rat1 == 4) || (rat1 == 8) || (rat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
					
		}
		
		if((pul1 == 1) || (pul1 == 2) || (pul1 == 3) || (pul1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		else if((pul1 == 0) || (pul1 == 4) || (pul1 == 8) || (pul1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
					
		}
		
		if((sat1 == 1) || (sat1 == 2) || (sat1 == 3) || (sat1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
			
		}
		
		else if((sat1 == 0) || (sat1 == 4) || (sat1 == 8) || (sat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
			
					
		}
		
	}
	
	if(angk1>=10 && angk1<100){
		
		if((pul1 == 1) || (pul1 == 2) || (pul1 == 3) || (pul1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		else if((pul1 == 0) || (pul1 == 4) || (pul1 == 8) || (pul1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
					
		}
		
		
		if((sat1 == 1) || (sat1 == 2) || (sat1 == 3) || (sat1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
			
		}
		
		else if((sat1 == 0) || (sat1 == 4) || (sat1 == 8) || (sat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				
		}
		
	}
	if(angk1>=1 && angk1<10){
				
		
		if((sat1 == 1) || (sat1 == 2) || (sat1 == 3) || (sat1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
		
		else if((sat1 == 0) || (sat1 == 4) || (sat1 == 8) || (sat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
					
		}
		
	}
	
	if(strcmp(operasi,"tambah") == 0){
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
		for(j=0;j<ketebalan;j++){
			printf("0");
		}
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
	}
	if(strcmp(operasi,"kurang") == 0){
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
	}
	else if(strcmp(operasi,"kali") == 0){
		for(j=0;j<ketebalan;j++){
			printf("0");
		}
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
		for(j=0;j<ketebalan;j++){
			printf("0");
		}
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
	}
	else if(strcmp(operasi,"bagi") == 0){
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
		for(j=0;j<ketebalan;j++){
			printf("0");
		}
		for(j=0;j<ketebalan;j++){
			printf("_");
		}
	}
	
	int sat2 = 0;
	int pul2 = 0;
	int rat2 = 0;
	
	if(angk2>=100 && angk2<1000){
		rat2 = angk2/100;
		pul2 = (angk2 - rat2 * 100) / 10;
		sat2 = ( angk2 - rat2 * 100 - pul2 * 10);
	}else if(angk2>=10 && angk2<100){
		pul2 = angk2/10;
		sat2 = angk2 - pul1*10;
	}else if(angk2>=0 && angk2<10){
		sat2 = angk2;
	}
	
	if(angk2>=100 && angk2<1000){
		if((rat2 == 1) || (rat2 == 2) || (rat2 == 3) || (rat2 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		else if((rat2 == 0) || (rat2 == 4) || (rat2 == 8) || (rat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
					
		}
		
		if((pul2 == 1) || (pul2 == 2) || (pul2 == 3) || (pul2 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		else if((pul2 == 0) || (pul2 == 4) || (pul2 == 8) || (pul2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
					
		}
		
		if((sat2 == 1) || (sat2 == 2) || (sat2 == 3) || (sat2 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
			
		}
		
		else if((sat2 == 0) || (sat2 == 4) || (sat2 == 8) || (sat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
		}
		
	}
	
	if(angk2>=10 && angk2<100){
		
		if((pul2 == 1) || (pul2 == 2) || (pul2 == 3) || (pul2 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		else if((pul2 == 0) || (pul2 == 4) || (pul2 == 8) || (pul2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
					
		}
		
		
		if((sat2 == 1) || (sat2 == 2) || (sat2 == 3) || (sat2 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
		}
		
		else if((sat2 == 0) || (sat2 == 4) || (sat2 == 8) || (sat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
		}
		
	}
	if(angk2>=1 && angk2<10){
				
		
		if((sat2 == 1) || (sat2 == 2) || (sat2 == 3) || (sat2 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}	
		}
		
		else if((sat2 == 0) || (sat2 == 4) || (sat2 == 8) || (sat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
					
		}
		
	}
	
	
	
	
	int hasil;
	
	if(strcmp(operasi, "tambah") == 0){
		hasil = angk1 + angk2;
	}else if(strcmp(operasi, "kali") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "bagi") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "kurang") == 0){
		hasil = angk1 - angk2;
	}
	
	int rathas = 0;
	int pulhas = 0;
	int sathas = 0;
	
	if(hasil>=100 && angk1<1000){
		rathas = hasil/100;
		pulhas = (hasil - rathas * 100) / 10;
		sathas = ( hasil - rathas * 100 - pulhas * 10);
	}else if(hasil>=10 && hasil<100){
		pulhas = hasil/10;
		sathas = hasil - pulhas*10;
	}else if(hasil>=0 && hasil<10){
		sathas = hasil;
	}
	
	if(hasil>=100 && hasil<1000){
		if((rathas == 1) || (rathas == 2) || (rathas == 3) || (rathas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		else if((rathas == 0) || (rathas == 4) || (rathas == 8) || (rathas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
					
		}
		
		if((pulhas == 1) || (pulhas == 2) || (pulhas == 3) || (pulhas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		else if((pulhas == 0) || (pulhas == 4) || (pulhas == 8) || (pulhas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
					
		}
		
		if((sathas == 1) || (sathas == 2) || (sathas == 3) || (sathas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
			
		}
		
		else if((sathas == 0) || (sathas == 4) || (sathas == 8) || (sathas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
		printf("\n");
	}
	
	if(hasil>=10 && hasil<100){
		
		if((pulhas == 1) || (pulhas == 2) || (pulhas == 3) || (pulhas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
		}
		
		else if((pulhas == 0) || (pulhas == 4) || (pulhas == 8) || (pulhas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<1;j++){
					printf("_");
				}
				
			
					
		}
		
		
		if((sathas == 1) || (sathas == 2) || (sathas == 3) || (sathas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
		
		else if((sathas == 0) || (sathas == 4) || (sat2 == 8) || (sat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
		printf("\n");
	}
	if(hasil>=1 && hasil<10){
				
		
		if((sathas == 1) || (sathas == 2) || (sathas == 3) || (sathas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
		}
		
		else if((sathas == 0) || (sathas == 4) || (sathas == 8) || (sathas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
			
					
		}
		printf("\n");
	}
	
	
	
}







int main(){
	int angka1;
	int angka2;
	int tebal;
	int i;
	char operasi[50];
	
	scanf("%d", &angka1);
	scanf("%d", &angka2);
	scanf("%d", &tebal);
	scanf("%d", &operasi);
	
	for(i=0;i<tebal;i++){
		baris1(angka1,angka2,operasi,tebal);
	}
	for(i=0;i<tebal;i++){
		baris2(angka1,angka2,operasi,tebal);
	}
	
	
	
	return 0;
}
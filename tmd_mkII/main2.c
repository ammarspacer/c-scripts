#include <stdio.h>
#include <string.h>
int main(){
	
/*int p,l,i,j;
printf("Masukkan panjang: ");
scanf("%d",&p);
printf("Masukkan lebar: ");
scanf("%d",&l);
for (i=1;i<=l;i++) { if (i==1 || i==l) for( j=1;j<=p;j++) { if (j==1 || j==p) printf("+"); else printf("-"); } else for ( j=1;j<=p;j++) {if(j==1 || j==p) printf("|"); else printf(" "); } printf("\n"); } return 0;
*/
	char kotak[100][100];
	int p,l,i,j;
	printf("Masukkan lebar: ");
	scanf("%d",&l);
	printf("Masukkan panjang: ");
	scanf("%d",&p);
	nfor (i=1;i<=p+3;i++) { 
		if (i==1 || i==p+3){ 
				for( j=1;j<=l;j++){ 
					if (j==1 || j==l){
						kotak[i][j] = '|' ; 
					}else{
						 kotak[i][j] = '-';
					}
				}	
		} else{ 
			for ( j=1;j<=l;j++) {
				if(j==1 || j==l){
					kotak[i][j] = '|' ;
				}else 
					kotak[i][j] = ' ' ; 
				} 

		}
	}	
	
	for(i=1;i<=p+3;i++){
		for(j=1;j<=l;j++){
			printf("%c",kotak[i][j]);
		}
		printf("\n");
	}
	return 0; 
}
/*#include /*Program untuk Membuat Persegi Panjang*/

/*main()
{
getchar(); 
getchar(); 
return 0; }
*/


/*#include /*Program untuk Membuat Persegi Panjang*/
/*
main()
{
*/
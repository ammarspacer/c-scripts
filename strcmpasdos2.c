#include <stdio.h>
#include <string.h>
int main(){
	char String1[10]="Achmad";
	char String2[50]="Ammar";
	char String3[50]="Naufal";
	
	int komparasi1=strcmp(String1,String2);//ini hasilnya negatip
	int komparasi2=strcmp(String3,String2);//ini hasilnya positip
	
	printf("hasil komparasi pertama : %d\n", komparasi1);
	printf("hasil komparasi kedua : %d\n", komparasi2);
	
	return 0;
}
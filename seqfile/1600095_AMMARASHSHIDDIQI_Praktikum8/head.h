#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*---------------------------------------*/
/*Type and structure declarations*/
/*------------------------------------*/

typedef struct{
	char nim[15]; 
	char nama[50];
	char kelas[8];
}mahasiswa;

/*Variable declarations*/
mahasiswa data[999]; 
int n;

/*Function and Procedure Prototypes*/
void readFile();
void getMaxLength(int max_length[3]);
void writeFile();
int findData(char[15]);
void inserData(mahasiswa);
void deleteData(char[15]);
void updateData(char[15]);

/*
 *  Saya M Ammar Fadhlur Rahman tidak melakukan kecurangan seperti yang telah
 *  dispesifikasikan pada mata kuliah Algoritma dan Pemrograman II dalam
 *  mengerjakan UAS Alpro II, jika saya melakukan kecurangan maka Allah/
 *  Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin
 */
/*
|--------------------------------------------------------------------------
| Header File
|--------------------------------------------------------------------------
|
| Here is where i register all needed libraries, global variable, and function
|
*/

#include <stdio.h>
#include <string.h>

/*--------------------------------------------------------------------------*/
/* Global variable declarations                                             */
/*--------------------------------------------------------------------------*/
/* WORD ENGINE DEPENDENCY */
int indeks;
int panjangkata;
char ckata[50];

/*--------------------------------------------------------------------------*/
/* Function prototypes                                                      */
/*--------------------------------------------------------------------------*/
/* WORD ENGINE FUNCTION */
void STARTKATA(char pita[]);
void INCKATA(char pita[]);
void ADVKATA(char pita[]);
char* GETCKATA();
int GETPANJANGKATA();
int EOPKATA();

/* CHARACTER CHECKER FUNCTION */
int isVowel(char d);
int isNum(char d);
int isCons(char d);
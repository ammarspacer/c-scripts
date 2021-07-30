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

/*--------------------------------------------------------------------------*/
/* Global variable declarations                                             */
/*--------------------------------------------------------------------------*/
/* CHARACTER ENGINE DEPENDENCY */
int indeks;
int cc;

/*--------------------------------------------------------------------------*/
/* Function prototypes                                                      */
/*--------------------------------------------------------------------------*/
/* CHARACTER ENGINE FUNCTION */
void START(char pita[]);
void INC(char pita[]);
void ADV(char pita[]);
char GETCC();
int EOP();

/* CHARACTER CHECKER FUNCTION */
int isVowel(char d);
int isNum(char d);
int isCons(char d);
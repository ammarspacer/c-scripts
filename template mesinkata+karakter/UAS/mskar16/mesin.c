/*
 *  Saya M Ammar Fadhlur Rahman tidak melakukan kecurangan seperti yang telah
 *  dispesifikasikan pada mata kuliah Algoritma dan Pemrograman II dalam
 *  mengerjakan UAS Alpro II, jika saya melakukan kecurangan maka Allah/
 *  Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin
 */
/*
|--------------------------------------------------------------------------
| Program File
|--------------------------------------------------------------------------
|
| Here is where i define all function and procedure*.
|
*/

#include "header.h"

/**
 * START        Initialize Character Engine.
 * @description This function will initialize the index accessor of data.
 * @param pita  Data to use.
 *
 * THIS FUNCTION USE GLOBAL VARIABLES.
 */
void START(char pita[]) {
  indeks = 0;
  cc = pita[indeks];
}

/**
 * INC          Increment the character from data.
 * @param pita  Data to use.
 *
 * THIS FUNCTION USE GLOBAL VARIABLES.
 */
void INC(char pita[]) {
  indeks += 1;
  cc = pita[indeks];
}

/**
 * ADV          Increment the character from data, but ignoring space character.
 * @param pita  Data to use.
 *
 * THIS FUNCTION USE GLOBAL VARIABLES.
 */
void ADV(char pita[]) {
  indeks += 1;
  cc = pita[indeks];
  while(cc == ' ' && EOP() == 0) {
    indeks += 1;
    cc = pita[indeks];
  }
}

/**
 * GETCC    Get the current character from data.
 * @return  Return the character in which index currently on.
 *
 * THIS FUNCTION USE GLOBAL VARIABLES.
 */
char GETCC() {
  return cc;
}

/**
 * EOP          End-of-Process.
 * @description Character Engine will stop when the current character is the
 *              limiter, in this case the limiter is period character ('.').
 * @return      integer value of 1 if current character met the condition. 
 *
 * THIS FUNCTION USE GLOBAL VARIABLES.
 */
int EOP() {
  if(cc == '.') {
    return 1;
  } else {
    return 0;
  }
}

/**
 * isVowel    Check wether the character passed is a vowel or not.
 * @param  d  character to check.
 * @return    integer value of 1 if d met the condition.
 */
int isVowel(char d) {
  if (d == 'a' || d == 'i' || d == 'u' || d == 'e' || d == 'o') {
    return 1;
  }
  return 0;
}

/**
 * isNum      Check wether the character passed is a number or not.
 * @param  d  character to check.
 * @return    integer value of 1 if d met the condition.
 */
int isNum(char d) {
  if (d >= '0' && d <= '9') {
    return 1;
  }
  return 0;
}

/**
 * isNum      Check wether the character passed is a consonant or not.
 * @param  d  character to check.
 * @return    integer value of 1 if d met the condition.
 */
int isCons(char d) {
  if (d != 'a' && d != 'i' && d != 'u' && d != 'e' && d != 'o' && d != ' ' && d != '.' && isNum(d) == 0) {
    return 1;
  }
  return 0;
}

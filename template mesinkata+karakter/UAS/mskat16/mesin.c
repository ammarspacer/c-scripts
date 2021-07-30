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
 * STARTKATA    Initialize Word Engine.
 * @description This function will initialize the index accessor of data.
 * @param pita  Data to use.
 *
 * THIS FUNCTION USE GLOBAL VARIABLES.
 */
void STARTKATA(char pita[]) {
  indeks = 0;
  panjangkata = 0;
  while(pita[indeks] == ' ') {
    indeks += 1;
  }
  while((pita[indeks] != ' ') && (pita[indeks] != '.')) {
    ckata[panjangkata] = pita[indeks];
    indeks += 1;
    panjangkata += 1;
  }
  ckata[panjangkata] = '\0';
}

/**
 * RESETKATA    Reset the Word Engine.
 *
 * THIS FUNCTION USE GLOBAL VARIABLES.
 */
void RESETKATA() {
  panjangkata = 0;
  ckata[panjangkata] = '\0';
}

/**
 * INC          Increment the word from data.
 * @param pita  Data to use.
 *
 * THIS FUNCTION USE GLOBAL VARIABLES.
 */
void INCKATA(char pita[]) {
  panjangkata = 0;
  while(pita[indeks] == ' ') {
    indeks += 1;
  }
  while((pita[indeks] != ' ') && (pita[indeks] != '.')) {
    ckata[panjangkata] = pita[indeks];
    indeks += 1;
    panjangkata += 1;
  }
  ckata[panjangkata] = '\0';
}

/**
 * GETCKATA   Get the current word from data.
 * @return    Return the word in which index currently on.
 *
 * THIS FUNCTION USE GLOBAL VARIABLES.
 */
char* GETCKATA() {
  return ckata;
}


int GETPANJANGKATA() {
  return panjangkata;
}

/**
 * EOP          End-of-Process.
 * @description Word Engine will stop when the current end character is the
 *              limiter, in this case the limiter is period character ('.').
 * @return      integer value of 1 if current character met the condition. 
 *
 * THIS FUNCTION USE GLOBAL VARIABLES.
 */
int EOPKATA(char pita[]) {
  if (pita[indeks] == '.')
  {
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

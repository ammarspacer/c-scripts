/*
 *  Saya M Ammar Fadhlur Rahman tidak melakukan kecurangan seperti yang telah
 *  dispesifikasikan pada mata kuliah Algoritma dan Pemrograman II dalam
 *  mengerjakan UAS Alpro II, jika saya melakukan kecurangan maka Allah/
 *  Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin
 */
/*
|--------------------------------------------------------------------------
| Main Program File
|--------------------------------------------------------------------------
|
| Here is where i build the program mainframe.
|
*/

#include "mesin.c"

/**
 * @brief main program function
 * @details This function are the main program function, which every local
 * variable declaration, user input prompt, function call and pattern display
 * are executed.
 *
 * @param argc  The parameter are additional. void also could be used.
 * @param argv  The parameter are additional. void also could be used.
 *
 * @return Based on ISO C 9899:1999, This function should return an integer
 * because we're running it on hosted environment (on top of an OS).
 */
int main(int argc, char const *argv[])
{
  char inquiry[1000]; /* store inputted string */

  char curword[64];
  int curlen;
  
  int index;
  int counter = 0;

  /* Condition Toggle */
  int hasCons = 0;
  int hasVowel = 0;
  int hasNum = 0;

  int isntMatch = 1;
  scanf(" %999[^\n]s", inquiry);

  STARTKATA(inquiry);
  do {
    strcpy(curword, GETCKATA()); /* copy the word to curword */
    curlen = strlen(curword); /* find the word length */

    /* reset condition toggle */
    hasCons = 0;
    hasVowel = 0;
    hasNum = 0;

    index = 0;
    while (index < curlen && isntMatch) { /* iterate through character */
      if (isCons(curword[index])) { /* if consonant */
        hasCons = 1;
      } else if (isVowel(curword[index])) { /* if vowel */
        hasVowel = 1;
      } else if (isNum(curword[index])) { /* if number */
        hasNum = 1;
      }
      index += 1;

      if (hasVowel && hasNum && hasCons) {
        counter += 1;
        isntMatch = 0;
      }
    }

    isntMatch = 1;
    INCKATA(inquiry);
  } while (EOPKATA(inquiry) == 0);

  printf("%d\n", counter);

  return 0; /* return 0 as the program succeed*/
} /* main function */
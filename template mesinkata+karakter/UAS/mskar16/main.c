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
  char inquiry[256];  /* store inputted string */
  int match = 0;      /* store matching condition status */
  int counter = 0;    /* to count the matched condition */

  scanf(" %255[^\n]s", inquiry); /* prompt user to input the data */

  START(inquiry); /* initialize character engine using inquiry */

  do { /* do this while character aren't the limiter */
    /* if the character are consonant */
    if (match == 0 && isCons(GETCC())) {
      match = 1;
      INC(inquiry);
    }
    
    /* if the character are vowel and previous character were consonant */
    if (match == 1 && isVowel(GETCC())) { 
      match = 2;
    } else {
      match = 0;
    }
    INC(inquiry);

    /* if the character are number and previous character met the condition */
    if (match == 2 && isNum(GETCC())) {
      match += 1;
      INC(inquiry);
    } else {
      match = 0;
    }

    /* when the condition met, count it up */
    if (match == 3) {
      counter += 1;
      match = 0; /* reset the condition status */
    }

  } while (EOP() == 0); /* do this while character aren't the limiter */

  printf("%d\n", counter); /* print the counter result */

  return 0; /* return 0 as the program succeed*/
} /* main function */
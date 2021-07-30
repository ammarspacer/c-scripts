/*
  Saya Naufan Rusyda Faikar mengerjakan evaluasi Ghosty16 - TP 6 dalam mata kuliah Algoritma dan Pemrograman I dengan mengharapkan wajah Allah, maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
*/



// ----------------LIBRARY that contains (basic) funtions of printf, scanf, etc.
#include <stdio.h>

// ----------------------TYPE DECLARATION OF VARIABLE INPUT
typedef struct {
  int quality;                // scale: 1-10.
  int discount;               // scale: 1-100.
  unsigned long int price;    // after discount.
} in_looping;                 // name of type

// -----------THE MAIN PROGRAM.
int main() {
  // -----------------------ADDITION VARIABLES
  int number_of_items = 0;
  int i, j; // for iteration

  // --------------------------------VARIABLE DECLARATIONS OF INPUT.
  in_looping sell[100];
  char criteria;  // about the item that'll be purchased
  long int money; // belongs to the user

  // ----------INPUT FROM USER.
  while (1) {          /* do looping until 0 is reached. */
    number_of_items++; // add number of item.

    /* input: the item quality. */
    scanf(" %d", &sell[number_of_items - 1].quality);
    /* break statement. */
    if (sell[number_of_items - 1].quality == 0)
      break;

    /* input: the item discount. */
    scanf(" %d", &sell[number_of_items - 1].discount);
    /* input: the item price. */
    scanf(" %lu", &sell[number_of_items - 1].price);
  }

  scanf(" %c", &criteria);   /* input: criteria of item from the user */
  scanf(" %lu", &money);     /* input: money from the user */

  // --------------------------------VARIABLE OF OUTPUT, set to first data
  int optimal_quality                = sell[0].quality;
  int optimal_discount               = sell[0].discount;
  unsigned long int optimal_price    = sell[0].price;

  // -------------------------PROCESS.
  if (number_of_items > 2) {
  switch (criteria) {
    case 'D': { // Highest discount
      for (i = 1; i < (number_of_items - 1); i++)
        if (money >= sell[i].price)                     /* checks prices */
          if ((optimal_quality < sell[i].quality)  ||   /* checks qualities */
             (optimal_discount < sell[i].discount)) {   /* checks discounts */
              optimal_quality  = sell[i].quality;
              optimal_discount = sell[i].discount;
              optimal_price    = sell[i].price;
            }
      } break;
      case 'C': { // Cheapest
        for (i = 1; i < (number_of_items - 1); i++)
          if (money >= sell[i].price)                     /* checks prices */
            if ((optimal_quality < sell[i].quality)  ||   /* checks qualities */
                (optimal_price > sell[i].price))     {    /* checks discounts */
                optimal_quality  = sell[i].quality;
                optimal_discount = sell[i].discount;
                optimal_price    = sell[i].price;
              }
    }
  }
  }

  // --------------------------OUTPUT.
  if (money >= optimal_price) // if the user has enough money
    printf("Beli Gunpla Kualitas %d seharga %lu setelah diskon %d persen.\n",
    optimal_quality, optimal_price, optimal_discount);
  else
    printf("Tidak ada yang cocok.\n");

  return 0;
}

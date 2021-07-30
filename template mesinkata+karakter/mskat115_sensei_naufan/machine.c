#include "header.h"
/******************************************************************************/
/*                  PERINTAH-PERINTAH DASAR PADA MESIN KATA                   */
/******************************************************************************/



/*
 *  Memulai pembacaan kata
 **/
void STARTKATA(char pita[]){
  indeks = 0;       // indeks pembacaan disetel ke nol (;karakter pertama)
  panjangkata = 0;  // variabel penghitung jumlah karakter pada kata
                    //-- disetel ke nol (belum mulai menghitung karakter)

  /*
  -- jika karakter yang sedang dibaca adalah karakter spasi
  -- maka pembacaan kata selesai,
  -- namun pembacaan kalimat belum selesai
  */
  while (pita[indeks] == ' ') {
    indeks++; // indeks pembacaan ditambah satu (;karakter berikutnya)
  }

  /*
  -- jika bukan karakter spasi (;pemisah kata) dan
  -- bukan karakter titik (;pemisah kalimat)
  */
  while((pita[indeks] != ' ') && (pita[indeks] != '.')) {
    ckata[panjangkata] = pita[indeks];  // menyimpan (sementara) karakter
                                        //-- yang sedang dibaca
    indeks++;                           // indeks pembacaan ditambah
                                        //-- satu (;karakter berikutnya)
    panjangkata++;                      // panjang kata ditambah satu
  }
  ckata[panjangkata] = '\0';            // penyimpan kata (sementara)
                                        //-- sementara dianggap sudah
                                        //-- menyimpan kata seutuhnya
}



/*
 *  Mengosongkan penyimpan kata (sementara)
 **/
void RESETKATA(){
  panjangkata = 0;            // variabel penghitung jumlah karakter pada kata
                              //-- disetel ke nol
                              //-- (belum mulai menghitung karakter)
  ckata[panjangkata] = '\0';  // penyimpan kata (sementara)
                              //-- dikosongkan
}



/*
 *  Membaca kata yang selanjutnya
 **/
void INCKATA(char pita[]){
  panjangkata = 0;                        // variabel penghitung jumlah karakter
                                          //-- pada kata disetel ke nol
  while (pita[indeks] == ' ') {
      indeks++;                           // indeks pembacaan ditambah
                                          //-- satu (;karakter berikutnya)
  }
  while ((pita[indeks] != ' ') && (pita[indeks] != '.')) {
      ckata[panjangkata] = pita[indeks];  // menyimpan (sementara) karakter
                                          //-- yang sedang dibaca
      indeks++;                           // indeks pembacaan ditambah
                                          //-- satu (;karakter berikutnya)
      panjangkata++;                      // panjang kata ditambah satu
  }
  ckata[panjangkata] = '\0';              // penyimpan kata (sementara)
                                          //-- sementara dianggap sudah
                                          //-- menyimpan kata seutuhnya
}



/*
 *	Mendapatkan kata yang telah sedang dibacanya
 **/
char* GETCKATA(){ // Get Current Kata
  return ckata;
}



/*
 *  Mendapatkan jumlah karakter pada kata yang telah sedang dibaca
 */
int GETPANJANGKATA(){
  return panjangkata;
}



/*
 *	Sinyal tanda selesai pembacaan
 **/
int EOPKATA(char pita[]) {		// End of Process
	if(pita[indeks] == '.' ) {	// Tanda baca titik dipakai untuk tanda selesai pembacaan
		return 1;
	} else {					          // Jika karakter yang sedang dibaca
										          //--bukan '.', maka teruskan pembacaan
		return 0;
	}
}





/******************************************************************************/
/*                 PERINTAH-PERINTAH TAMBAHAN PADA MESIN KATA                 */
/******************************************************************************/



void GETKATAUNIK(int *jmlKata) {
  /******************************************************************
   * statusKata = 0; belum atau tidak terdapat satu pun underscore  *
   * statusKata = 1; terdapat satu buah underscore                  *
   * statusKata >= 2; terdapat minimal dua buah underscore          *
   ******************************************************************/
  int statusKata = 0;
  int indeks_karakter = 0;
  while (indeks_karakter < GETPANJANGKATA()) {
    if (GETCKATA()[indeks_karakter] == '_') {
      statusKata++;
    }

    indeks_karakter++;
  }

  if (statusKata >= 2) {
    *jmlKata = *jmlKata + 1;
  }
}

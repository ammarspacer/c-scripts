/*Diberikan masukan berupa tiga buah karakter, periksa apakah karakter itu konsonan atau vokalnya. Jika karakter adalah konsonan maka ganti tampilan menjadi 1, jika karakter adalah vokal maka ganti tampilan menjadi 2. Misalnya jika masukan karakter adalah a b c maka tampilannya menjadi 2 1 1.
Format Masukan:

tiga buah karakter

Format Keluaran:

tampilan pengganti sesuai dengan soal

Contoh Masukan

b j k


Contoh Keluaran

1 1 1

Contoh Masukan 2

a d a


Contoh Keluaran 2

2 1 2

       
Contoh Masukan 3

k i i


Contoh Keluaran 3

1 2 2

        

*/




#include <stdio.h>
int main(){
	//Menentukan variabel
	char c1, c2, c3;
	//Menentukan variabel pengganti
	int i1=0, i2=0, i3=0;
	//Penginputan
	scanf("%c %c %c", &c1, &c2, &c3);
	//
	if((c1 == 'a') || (c1 == "i") || (c1 == 'u') || (c1 == 'e') || (c1 == 'o')){
		i1=2;
	}else if((c1 != 'a') || (c1 != "i") || (c1 != 'u') || (c1 != 'e') || (c1 != 'o')){
		i1=1;
	}
	if((c2 == 'a') || (c2 == "i") || (c2 == 'u') || (c2 == 'e') || (c2 == 'o')){
		i2=2;
	}else if((c2 != 'a') || (c2 != "i") || (c2 != 'u') || (c2 != 'e') || (c2 != 'o')){
		i2=1;
	}
	if((c3 == 'a') || (c3 == "i") || (c3 == 'u') || (c3 == 'e') || (c3 == 'o')){
		i3=2;
	}else if((c3 != 'a') || (c3 != "i") || (c3 != 'u') || (c3 != 'e') || (c3 != 'o')){
		i3=1;
	}
	
	//output
	printf("%d %d %d", i1, i2, i3);
	return 0;

}
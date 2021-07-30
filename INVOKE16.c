#include <stdio.h>

/* Saya Reyhan Fikri Dzikriansyah mengerjakan evaluasi Tugas Praktikum 5 dalam mata kuliah Algoritma & 
Pemrograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
Aamiin. */

// Nama : Reyhan Fikri Dzikriansyah
// NIM : 1602273
// INVOKE16
// Bismillah... semoga mendapatkan hasil yang terbaik. Aamiin.

int main(){

	// Variabel untuk jumlah skill yang akan digunakan
	int n;
	
	// Menginput jumlah skill yang akan digunakan
	scanf("%d", &n);
	
	// Membuat variabel-variabel lainnya
	char komb_skill[4]; // Variabel untuk kombo skill
	int nomor_skill[n]; // Variabel array untuk mengetahui nomor skill yang digunakan
	int damage[n]; // Variabel array untuk mengetahui berapa damage yang dihasilkan
	int i; // Variabel counter untuk looping
	int counter_tidakvalid = 0; // Variabel untuk menghitung kombo yang tidak valid
	
	// ~~~INPUT~~~
	
	// Looping inputan kombo
	for (i = 0; i < n; i++){ // Looping sejumlah dengan jumlah skill yang digunakan (n)
		scanf(" %c %c %c %c", &komb_skill[0], &komb_skill[1], &komb_skill[2], &komb_skill[3]); // Menginput combo skill
		
		// Melakukan pemilihan bercabang untuk mengetahui nomor skill mana yang digunakan dan damage yang dihasilkan
		if((komb_skill[0] == 'Q') && (komb_skill[1] == 'Q') && (komb_skill[2] == 'Q') && (komb_skill[3] == 'R')){ // Kombinasi kombo = Q Q Q R
			nomor_skill[i] = 1; // Nomor skill 1 (Cold Snap)
			damage[i] = 100; // Damage yang dihasilkan skill Cold Snap
		}else if((komb_skill[0] == 'Q') && (komb_skill[1] == 'Q') && (komb_skill[2] == 'W') && (komb_skill[3] == 'R')){ // Kombinasi kombo = Q Q W R
			nomor_skill[i] = 2; // Nomor skill 2 (Ghost Walk)
			damage[i] = 50; // Damage yang dihasilkan skill Ghost Walk
		}else if((komb_skill[0] == 'Q') && (komb_skill[1] == 'Q') && (komb_skill[2] == 'E') && (komb_skill[3] == 'R')){ // Kombinasi kombo = Q Q E R
			nomor_skill[i] = 3; // Nomor skill 3 (Ice Wall)
			damage[i] = 150; // Damage yang dihasilkan skill Ice Wall
		}else if((komb_skill[0] == 'W') && (komb_skill[1] == 'W') && (komb_skill[2] == 'W') && (komb_skill[3] == 'R')){ // Kombinasi kombo = W W W R
			nomor_skill[i] = 4; // Nomor skill 4 (EMP)
			damage[i] = 300; // Damage yang dihasilkan skill EMP
		}else if((komb_skill[0] == 'W') && (komb_skill[1] == 'W') && (komb_skill[2] == 'Q') && (komb_skill[3] == 'R')){ // Kombinasi kombo = W W Q R
			nomor_skill[i] = 5; // Nomor skill 5 (Tornado)
			damage[i] = 250; // Damage yang dihasilkan skill Tornado
		}else if((komb_skill[0] == 'W') && (komb_skill[1] == 'W') && (komb_skill[2] == 'E') && (komb_skill[3] == 'R')){ // Kombinasi kombo = W W E R
			nomor_skill[i] = 6; // Nomor skill 6 (Alacrity)
			damage[i] = 200; // Damage yang dihasilkan skill Alacrity
		}else if((komb_skill[0] == 'E') && (komb_skill[1] == 'E') && (komb_skill[2] == 'E') && (komb_skill[3] == 'R')){ // Kombinasi kombo = E E E R
			nomor_skill[i] = 7; // Nomor skill 7 (Sun Strike)
			damage[i] = 400; // Damage yang dihasilkan skill Sun Strike
		}else if((komb_skill[0] == 'E') && (komb_skill[1] == 'E') && (komb_skill[2] == 'Q') && (komb_skill[3] == 'R')){ // Kombinasi kombo = E E Q R
			nomor_skill[i] = 8; // Nomor skill 8 (Forge Spirit)
			damage[i] = 200; // Damage yang dihasilkan skill Forge Spirit
		}else if((komb_skill[0] == 'E') && (komb_skill[1] == 'E') && (komb_skill[2] == 'W') && (komb_skill[3] == 'R')){ // Kombinasi kombo = E E W R
			nomor_skill[i] = 9; // Nomor skill 9 (Chaos Meteor)
			damage[i] = 500; // Damage yang dihasilkan skill Chaos Meteor
		}else if((komb_skill[0] == 'Q') && (komb_skill[1] == 'W') && (komb_skill[2] == 'E') && (komb_skill[3] == 'R')){ // Kombinasi kombo = Q W E R
			nomor_skill[i] = 10; // Nomor skill 10 (Defining Blast)
			damage[i] = 450; // Damage yang dihasilkan skill Defining Blast
		}else{ // Kombinasi kombo tidak valid
			nomor_skill[i] = 0; // Nomor skill 0 (untuk kombo tidak valid)
			damage[i] = 0; // Tidak menghasilkan damage
			counter_tidakvalid = counter_tidakvalid + 1; // Menambah counter kombo yang tidak valid
		}
	}
	
	int hp; // Membuat variabel untuk darah musuh
	scanf("%d", &hp); // Menginput darah musuh
	
	// ~~~OUTPUT~~~
	
	printf("----------\n"); // Mengoutput ---------- pertama
	
	// Looping untuk output kombo yang valid
	for(i = 0; i < n; i++){ // Looping sejumlah dengan jumlah skill yang digunakan (n) 
		if((nomor_skill[i] > 0) && (nomor_skill[i] <= 10)){ // Syarat kombo yang valid adalah nomor skill 1 sampai 10
	
			// Menggunakan switch untuk menentukan output kombo yang valid dengan berdasarkan nomor skill
			switch (nomor_skill[i]){
				case 1 : { // Output nomor skill 1
					printf("Command ke %d", (i + 1)); /* Output command ke i + 1 (ditambah 1 karena looping dimulai dari 0) */
					printf(" = Cold Snap\n"); /* Output nama skill */
					break;
				}
				case 2 : { // Output nomor skill 2
					printf("Command ke %d", (i + 1));
					printf(" = Ghost Walk\n");
					break;
				}
				case 3 : { // Output nomor skill 3
					printf("Command ke %d", (i + 1));
					printf(" = Ice Wall\n");
					break;
				}
				case 4 : { // Output nomor skill 4
					printf("Command ke %d", (i + 1));
					printf(" = EMP\n");
					break;
				}
				case 5 : { // Output nomor skill 5
					printf("Command ke %d", (i + 1));
					printf(" = Tornado\n");
					break; 
				}
				case 6 : { // Output nomor skill 6
					printf("Command ke %d", (i + 1));
					printf(" = Alacrity\n");
					break;
				}
				case 7 : { // Output nomor skill 7
					printf("Command ke %d", (i + 1));
					printf(" = Sun Strike\n");
					break;
				}
				case 8 : { // Output nomor skill 8
					printf("Command ke %d", (i + 1));
					printf(" = Forge Spirit\n");
					break;
				}
				case 9 : { // Output nomor skill 9
					printf("Command ke %d", (i + 1));
					printf(" = Chaos Meteor\n");
					break;
				}
				case 10 : { // Output nomor skill 10
					printf("Command ke %d", (i + 1));
					printf(" = Defining Blast\n");
					break;
				}
				default: // Default tidak diisi karena tidak ada output untuk nomor skill selain 1 sampai 10
				break;
			}
		}
	}
	
	printf("----------\n");	// Mengoutput ---------- kedua
	
	// Melakukan pemilihan untuk mengetahui apakah ada kombo yang tidak valid
	if(counter_tidakvalid > 0){ // Terdapat kombo yang tidak valid
	
		// Looping untuk output kombo yang tidak valid dimulai dari i sejumlah n sampai 0
		for(i = n; i >= 0; i--){
			
			// Syarat kombo tidak valid adalah nomor skill harus 0
			if(nomor_skill[i] == 0){
				printf("Command ke %d", (i + 1)); // Output command ke i + 1
				printf(" tidak valid\n"); // Output command i + 1 tidak valid
			}
		}
	}else if(counter_tidakvalid == 0){ // Semua kombo valid
		printf("Semua command valid\n"); // Output semua command valid
	}
	
	printf("----------\n");	// Mengoutput ---------- terakhir
	
	// Membuat variabel untuk menghitung dan mengoutput total damage yang dihasilkan
	int total_damage = 0;
	
	// Looping untuk menjumlahkan semua damage yang dihasilkan
	for(i = 0; i < n; i++){
		total_damage = total_damage + damage[i];
	}
	
	// Melakukan pemilihan untuk mengetahui apakah invoker menang atau kalah
	if(total_damage >= hp){ // Jika damage yang dihasilkan cukup untuk menghabiskan darah musuh, maka invoker WIN
		printf("Invoker WIN\n"); // Output Invoker WIN
	}else{ // Jika tidak cukup, maka invoker LOSE
		printf("Lose. . .\n"); // Output Lose. . .
	}
	
	//Mengoutput total damage yang dihasilkan
	printf("Total Damage = %d\n", total_damage);
	
	return 0;

}

// Beres sudah soal dota ini... ( -w-)
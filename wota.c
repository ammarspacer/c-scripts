#include <stdio.h>

/* Saya Ammar Ashshiddiqi mengerjakan evaluasi Tugas Praktikum 5 dalam mata kuliah Algoritma & 
Pemrograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
Aamiin. */









int main(){
	//Variabel jumlah skillz yang akan digunakan
	int n,i;
	//Jumlah skill yg akan digunakan sebanyak n
	scanf("%d", &n);
	
	//Ruang untuk inputan skill
	char keyboard[4];
	
	//Array untuk menentukan inputan skill
	int skillz[n];
	
	//Variabel Dmg
	int damage;
	int serangan[n];
	
	//Variabel bila tdk valit
	int teu_valid;
	
	
	/* Proses */
	for(i=0;i<n;i++){
		scanf(" %c %c %c %c", keyboard[0], keyboard[1], keyboard[2], keyboard[3]);
	
		if((keyboard[0] == 'Q') && (keyboard[1] == 'Q') && (keyboard[2] == 'Q') && (keyboard[3] == 'R')){
			skillz[i] = 1; //Cold Snap
			damage = 100; //Damage Cold Snap
		}else if((keyboard[0] == 'Q') && (keyboard[1] == 'Q') && (keyboard[2] == 'W') && (keyboard[3] == 'R')){
			skillz[i] = 2; //Jalan Hantu
			damage = 50; //Damage Jalan Hantu
		}else if((keyboard[0] == 'Q') && (keyboard[1] == 'Q') && (keyboard[2] == 'E') && (keyboard[3] == 'R')){
			skillz[i] = 3; //Ice Wall (Subzero kah?)
			damage = 150; //Damage Ice Wall
		}else if((keyboard[0] == 'W') && (keyboard[1] == 'W') && (keyboard[2] == 'W') && (keyboard[3] == 'R')){
			skillz[i] = 4; //Firing EMP
			damage = 300; //Damage EMP
		}else if((keyboard[0] == 'W') && (keyboard[1] == 'W') && (keyboard[2] == 'Q') && (keyboard[3] == 'R')){
			skillz[i] = 5; //Pusaaran Taufan
			damage = 250; //Damage Pusaaran Taufan
		}else if((keyboard[0] == 'W') && (keyboard[1] == 'W') && (keyboard[2] == 'E') && (keyboard[3] == 'R')){
			skillz[i] = 6; //Alacrity
			damage = 200; //Damage Alacrity
		}else if((keyboard[0] == 'E') && (keyboard[1] == 'E') && (keyboard[2] == 'E') && (keyboard[3] == 'R')){
			skillz[i] = 7; //Sun Strike
			damage = 400; //Damage Sun Strike
		}else if((keyboard[0] == 'E') && (keyboard[1] == 'E') && (keyboard[2] == 'Q') && (keyboard[3] == 'R')){
			skillz[i] = 8; //Forge Spirit
			damage = 200; //Damage Forge Spirit
		}else if((keyboard[0] == 'E') && (keyboard[1] == 'E') && (keyboard[2] == 'W') && (keyboard[3] == 'R')){
			skillz[i] = 9; //Chaos Meteor
			damage = 500; //Damage Chaos Meteor
		}else if((keyboard[0] == 'Q') && (keyboard[1] == 'W') && (keyboard[2] == 'E') && (keyboard[3] == 'R')){
			skillz[i] = 10; //Defining Blast
			damage = 450; //Damage Defining Blast
		}else{ // Jika kombinasi kombo tidak valid
			skillz[i] = 0; // Nomor skill 0 (untuk kombo tidak valid)
			serangan[i] = 0; // No damage damage
			teu_valid = teu_valid + 1; // Menambah counter kombo yang tidak valid
		}
	}
	
	//Variabel nyawa musuh
	int health, nomor_skill[n];
	//Meminta masukan jumlah nyawa musug
	scanf("%d", health);
	
	//Output
	printf("-----------\n");
	//-----------------------------------------------------//
	for(i = 0; i < n; i++){ // Looping sejumlah dengan jumlah skill yang digunakan (n) 
		if((skillz[i] > 0) && (skillz[i] <= 10)){ // Kombo valid jika n > 0 dan n <= 10
		       switch (nomor_skill[i]){
				case 1 : { // Output nomor skill 1
					printf("Command ke %d", (i + 1)); // Output command ke i + 1 (ditambah karena i dimulai dari 0)
					printf(" = Cold Snap\n"); // Output nama skill
					break;
				}
				case 2 : { // Output nomor skill 2
					printf("Command ke %d", (i + 1)); // Output command ke i + 1 (ditambah karena i dimulai dari 0)
					printf(" = Ghost Walk\n"); // Output nama skill
					break;
				}
				case 3 : { // Output nomor skill 3
					printf("Command ke %d", (i + 1)); // Output command ke i + 1 (ditambah karena i dimulai dari 0)
					printf(" = Ice Wall\n"); // Output nama skill
					break;
				}
				case 4 : { // Output nomor skill 4
					printf("Command ke %d", (i + 1)); // Output command ke i + 1 (ditambah karena i dimulai dari 0)
					printf(" = EMP\n"); // Output nama skill
					break;
				}
				case 5 : { // Output nomor skill 5
					printf("Command ke %d", (i + 1)); // Output command ke i + 1 (ditambah karena i dimulai dari 0)
					printf(" = Tornado\n"); // Output nama skill
					break; 
				}
				case 6 : { // Output nomor skill 6
					printf("Command ke %d", (i + 1)); // Output command ke i + 1 (ditambah karena i dimulai dari 0)
					printf(" = Alacrity\n"); // Output nama skill
					break;
				}
				case 7 : { // Output nomor skill 7
					printf("Command ke %d", (i + 1)); // Output command ke i + 1 (ditambah karena i dimulai dari 0)
					printf(" = Sun Strike\n"); // Output nama skill
					break;
				}
				case 8 : { // Output nomor skill 8
					printf("Command ke %d", (i + 1)); // Output command ke i + 1 (ditambah karena i dimulai dari 0)
					printf(" = Forge Spirit\n"); // Output nama skill
					break;
				}
				case 9 : { // Output nomor skill 9
					printf("Command ke %d", (i + 1)); // Output command ke i + 1 (ditambah karena i dimulai dari 0)
					printf(" = Chaos Meteor\n"); // Output nama skill
					break;
				}
				case 10 : { // Output nomor skill 10
					printf("Command ke %d", (i + 1)); // Output command ke i + 1 (ditambah karena i dimulai dari 0)
					printf(" = Defining Blast\n"); // Output nama skill
					break;
				}
				default: // Default tidak diisi karena input hanya sampai 10
				break;
			}
		}
	}
	printf("----------\n");
	
	
	if(teu_valid > 0){ //----------------> Jika kombo tidak valid
	
		for(i = n; i >= 0; i--){
			if(nomor_skill[i] == 0){
				printf("Command ke %d", (i + 1)); // Output ke i + 1
				printf(" tidak valid\n"); // Output command i + 1 tidak valid
			}
		}
	}else if(teu_valid == 0){ // All combos can executed
		printf("Semua command valid\n"); // Output semua command valid
	}

	//Variabel damage total
	int dmgtot = 0;
	
	//Penghitungan damage total
	for(i = 0; i < n; i++){
		dmgtot = dmgtot + serangan[i];
	}
	
	if(dmgtot >= health){ //----------------> Jika damage lebih besar dari health musuh
 		printf("INVOKER WIN\n");
	}else if(dmgtot < health){ //--------> jika damage tidak lebih dari health musuh
		printf("Lose. . .\n");
	}
	//Output total dmg
	printf("%d\n", dmgtot);
	
	
	
	
	return 0;	
}


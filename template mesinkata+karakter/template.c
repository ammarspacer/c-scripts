template

//----------------------------------mesin kata-----------------------------------------------//


//deklarasi variabel global
int indeks;
int panjangkata;
char ckata[500];



//memulai kata
void startkata(char pita[]);
//mereset kata
void resetkata();
//increment kata
void inckata(char pita[]);
//mencomot kata
char* getckata();
//menentukan panjang kata 
int getpanjangkata();
//penghenti looping
int eopkata(char pita[]);

//memulai kata
void startkata(char pita[]){
	indeks = 0;
	panjangkata = 0;
	while(pita[indeks] == ' '){
		indeks++;
	}

	while((pita[indeks] != ' ') && (pita[indeks] != '.')){
		ckata[panjangkata] = pita[indeks];
		indeks++;
		panjangkata++;
	}
	ckata[panjangkata] = '\0';
}

//mereset kata
void resetkata(){
	panjangkata = 0;
	ckata[panjangkata] = '\0';
}

//increment kata
void inckata(char pita[]){
	panjangkata = 0;
	while(pita[indeks] == ' '){
		indeks++;
	}

	while((pita[indeks] != ' ') && (pita[indeks] != '.')){
		ckata[panjangkata] = pita[indeks];
		indeks++;
		panjangkata++;
	}
	ckata[panjangkata] = '\0';
}

//mencomot kata
char* getckata(){
	return ckata;
}

//menentukan panjang kata 
int getpanjangkata(){
	return panjangkata;
}

//penghenti looping
int eopkata(char pita[]){
	if(pita[indeks] == '.'){
		return 1;
	}else{
		return 0;
	}
}


//----------------------------------mesin karakter-----------------------------------------------//

//mesin huruf
//var globalnya
int indeks;
char cc;

//prosedur functionnya
void start(char pita[]);
void inc(char pita[]);
void adv(char pita[]);
char getcc();
int eop();

void start(char pita[]){ // mulai mesin
	indeks = 0;
	cc = pita[indeks];
}

void inc(char pita[]){ // next char
	indeks++;
	cc = pita[indeks];
}

void adv(char pita[]){ //next char mengabaikan ' '
	indeks++;
	cc = pita[indeks];

	while((cc == ' ') && (eop() == 0)){
		indeks++;
		cc = pita[indeks];
	}
}

char getcc(){ //mendapatkan char
	return cc;
}

int eop(){ // end of pita
	if(cc == '.'){
		return 1;
	}else{
		return 0;
	}

}

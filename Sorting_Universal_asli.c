
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void insertion(int *arr, int n){		// insertion sort

	int temp;		// variabel sementara untuk menyisipkan

	int i, j;		// variabel penghitung

	for(i = 0; i < n; i += 1){

		sisip = arr[i];		// masukan sesuatu kedalam tampungan

		j = i - 1;			// pembanding sebelumnya															INSERTION SORT

		while(sisip < arr[j] && j >= 0){	// jika jumlah sisip lebih kecil atau lebih besar
			
			arr[j+1] = arr[j];	// geser sesuatu itu
			j -= 1;	//	j kurangi 1 setiap pengulangannya

		}

		arr[j+1] = sisip;	// masukan temp yang disimpan tadi ke array yang tergeser

	}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void selectionSort(int *arr, int n){
	
	int i,j;	// pengulang
	int temp;	// temp

	int indeks;	// penentu indeks seleksi
	
	for (i = 0; i < n+1; ++i){
  		
  		indeks = i;	// dimulai dari indeks nilai i
 	 	
 	 	for (j = i+1; j < n; ++j){

   			if (arr[indeks] > arr[j]){																	// SELECTION SORT
    			indeks = j;
  			}
  					
  		}
  		
  		if (i != indeks){


  		temp = arr[i];
  		arr[i] = arr[indeks];
  		arr[indeks] = temp;
  		
  		}
 	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void bubble(int *arr, int n){

	int i;
	int tukar;

	do{

		tukar = 0;

		for(i = 0; i < (n-1); i += 1){

			if (arr[i] > arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];																// BUBBLE SORT
				arr[i+1] = temp;
				tukar = 1;
			}
		}

	}while(tukar == 1);

	output(arr, n);

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void quickSort(int l, int r, int n, int *arr){

	int i, j;
	char temp[100];

	i = l;
	j = r;

	do{

		while((arr[i] > arr[r]) && (i <= j)){

			/*mencegah i berjalan terlalu jauh melewati batas j*/												// QUICK SORT

			i = i + 1;

		}

		while((arr[j] < arr[l]) && (i <= j)){

			/*mencegah i berjalan terlalu jauh melewati batas i*/

			j = j - 1;

		}

		if(i < j){
			
			temp = arr[i];
			arr[i] = arr[j];																					// QUICK SORT
			arr[j] = temp;

			i += 1;
			j -= 1;
		}		

	}while(i < j);

	// tulis();

	if(l < j){
		quickSortPivotPinggir(l,j,n,arr);
	}
	
	if(i < r){
		quickSortPivotPinggir(i,r,n,arr);
	}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

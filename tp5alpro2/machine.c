#include "header.h"


void insertion(int n, database *merge){

	char insert_v1;	
	char insert_v2;	
	int insert_v3;

	int i, j;

	for(i = 0; i < n; i += 1){

		insert_v1 = merge[i].nama;
		insert_v2 = merge[i].status;
		insert_v3 = merge[i].nilai;

		j = i - 1;	

		while(insert_v1 < merge[j].nama && j >= 0){
			
			merge[j+1].nama = merge[j].nama;
			merge[j+1].status = merge[j].status;
			merge[j+1].nilai = merge[j].nilai;
			
			j -= 1;

		}

		merge[j+1].nama = insert_v1;
		merge[j+1].status = insert_v2;
		merge[j+1].nilai = insert_v3;

	}

}

void selection(int n, database *merge){
	
	int i,j;
	int temp_v1;
	int temp_v2;
	int temp_v3;

	int select;
	
	for (i = 0; i < n+1; ++i){
  		
  		select = i;
 	 	
 	 	for (j = i+1; j < n; ++j){

   			if (merge[select].nama > merge[j].nama){
    			select = j;
  			}
  					
  		}
  		
  		if (i != select){

  		temp_v1 = merge[i].nama;
  		temp_v2 = merge[i].status;
  		temp_v3 = merge[i].nilai;

  		merge[i].nama = merge[select].nama;
  		merge[i].status = merge[select].status;
  		merge[i].nilai = merge[select].nilai;
  		
  		merge[select].nama = temp_v1;
  		merge[select].status = temp_v2;
  		merge[select].nilai = temp_v3;
  		
  		}
 	}
}

void bubble(int n, database *merge){

	int i;
	int ok;
	
	int temp_v1;
	int temp_v2;
	int temp_v3;

	do{

		ok = 0;

		for(i = 0; i < (n-1); i += 1){

			if (merge[i].nama > merge[i+1].nama){
		
				temp_v1 = merge[i].nama;
				temp_v2 = merge[i].status;
				temp_v3 = merge[i].nilai;

				merge[i].nama = merge[i+1].nama;
				merge[i].status = merge[i+1].status;
				merge[i].nilai = merge[i+1].nilai;

				merge[i+1].nama = temp_v1;
				merge[i+1].status = temp_v2;
				merge[i+1].nilai = temp_v3;


				ok = 1;
		
			}
		}

	}while(ok == 1);

}

void quickSort(int l, int r, int n, database *merge){ // l = left pivot, r = Right Pivot! L = 0, R = n-1!

	int i, j;

	int temp_v1;
	int temp_v2;
	int temp_v3;

	i = l;
	j = r;

	do{

		while((merge[i].nama < merge[r].nama) && (i <= j)){

			/*mencegah i berjalan terlalu jauh melewati batas j*/

			i = i + 1;

		}

		while((merge[j].nama > merge[l].nama) && (i <= j)){

			/*mencegah i berjalan terlalu jauh melewati batas i*/

			j = j - 1;

		}

		if(i < j){
			
			temp_v1 = merge[i].nama;
			temp_v2 = merge[i].status;
			temp_v3 = merge[i].nilai;

			merge[i].nama = merge[j].nama;
			merge[i].status = merge[j].status;
			merge[i].nilai = merge[j].nilai;
			
			merge[j].nama = temp_v1;
			merge[j].status = temp_v2;
			merge[j].nilai = temp_v3;

			i += 1;
			j -= 1;
		}		

	}while(i < j);

	// tulis();

	if(l < j){
		quickSort(l,j,n,merge);
	}
	
	if(i < r){
		quickSort(i,r,n,merge);
	}

}


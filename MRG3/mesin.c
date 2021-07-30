#include "header.h"

void output(database *merge, int total){

	int i;

	for(i = 0; i < total; i += 1){
		printf("%d ", merge[i].value1);
		printf("%d ", merge[i].value2);
		printf("%d\n", merge[i].value3);
	}
}

void insertion(int n, database *merge){

	int insert_v1;	
	int insert_v2;	
	int insert_v3;

	int i, j;

	for(i = 0; i < n; i += 1){

		insert_v1 = merge[i].value1;
		insert_v2 = merge[i].value2;
		insert_v3 = merge[i].value3;

		j = i - 1;	

		while(insert_v1 < merge[j].value1 && j >= 0){
			
			merge[j+1].value1 = merge[j].value1;
			merge[j+1].value2 = merge[j].value2;
			merge[j+1].value3 = merge[j].value3;
			
			j -= 1;

		}

		merge[j+1].value1 = insert_v1;
		merge[j+1].value2 = insert_v2;
		merge[j+1].value3 = insert_v3;

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

   			if (merge[select].value1 > merge[j].value1){
    			select = j;
  			}
  					
  		}
  		
  		if (i != select){

  		temp_v1 = merge[i].value1;
  		temp_v2 = merge[i].value2;
  		temp_v3 = merge[i].value3;

  		merge[i].value1 = merge[select].value1;
  		merge[i].value2 = merge[select].value2;
  		merge[i].value3 = merge[select].value3;
  		
  		merge[select].value1 = temp_v1;
  		merge[select].value2 = temp_v2;
  		merge[select].value3 = temp_v3;
  		
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

			if (merge[i].value1 > merge[i+1].value1){
		
				temp_v1 = merge[i].value1;
				temp_v2 = merge[i].value2;
				temp_v3 = merge[i].value3;

				merge[i].value1 = merge[i+1].value1;
				merge[i].value2 = merge[i+1].value2;
				merge[i].value3 = merge[i+1].value3;

				merge[i+1].value1 = temp_v1;
				merge[i+1].value2 = temp_v2;
				merge[i+1].value3 = temp_v3;


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

		while((merge[i].value1 < merge[r].value1) && (i <= j)){

			/*mencegah i berjalan terlalu jauh melewati batas j*/

			i = i + 1;

		}

		while((merge[j].value1 > merge[l].value1) && (i <= j)){

			/*mencegah i berjalan terlalu jauh melewati batas i*/

			j = j - 1;

		}

		if(i < j){
			
			temp_v1 = merge[i].value1;
			temp_v2 = merge[i].value2;
			temp_v3 = merge[i].value3;

			merge[i].value1 = merge[j].value1;
			merge[i].value2 = merge[j].value2;
			merge[i].value3 = merge[j].value3;
			
			merge[j].value1 = temp_v1;
			merge[j].value2 = temp_v2;
			merge[j].value3 = temp_v3;

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

void fusion(database *a, database *b, database *merge, int n, int m){

	int i;
	int count1, count2, count3;

	count1 = 0;
	count2 = 0;
	count3 = 0;

	while((count1 < n) && (count2 < m)){
		
		if (a[count1].value1 < b[count2].value1){
			
			merge[count3].value1 = a[count1].value1;
			merge[count3].value2 = a[count1].value2;
			merge[count3].value3 = a[count1].value3;
			
			count1 += 1;
			count3 += 1;

		}else if(b[count2].value1 < a[count1].value1){

			merge[count3].value1 = b[count2].value1;
			merge[count3].value2 = b[count2].value2;
			merge[count3].value3 = b[count2].value3;

			count2 += 1;
			count3 += 1;
	
		}else{

			merge[count3].value1 = a[count1].value1;
			merge[count3].value2 = a[count1].value2;
			merge[count3].value3 = a[count1].value3;

			count1 += 1;
			count3 += 1;

			merge[count3].value1 = b[count2].value1;
			merge[count3].value2 = b[count2].value2;
			merge[count3].value3 = b[count2].value3;
		
			count2 += 1;
			count3 += 1;
		
		}
	}

	if(count1 < n){
		for (i = count1; i < n; i += 1){

			merge[count3].value1 = a[i].value1;
			merge[count3].value2 = a[i].value2;
			merge[count3].value3 = a[i].value3;

			count3 += 1;
		
		}
	}else if(count2 < m){
		for(i = count2; i < m; i += 1){

			merge[count3].value1 = b[i].value1;
			merge[count3].value2 = b[i].value2;
			merge[count3].value3 = b[i].value3;
			
			count3 += 1;
		
		}
	}

}
void fusion(database *a, database *b, database *merge, int n, int m){

	int i;
	int count1, count2, count3;

	count1 = 0;
	count2 = 0;
	count3 = 0;

	while((count1 < n) && (count2 < m)){
		
		if (a[count1].nama < b[count2].nama){
			
			merge[count3].nama = a[count1].nama;
			merge[count3].status = a[count1].status;
			merge[count3].nilai = a[count1].nilai;
			
			count1 += 1;
			count3 += 1;

		}else if(b[count2].nama < a[count1].nama){

			merge[count3].nama = b[count2].nama;
			merge[count3].status = b[count2].status;
			merge[count3].nilai = b[count2].nilai;

			count2 += 1;
			count3 += 1;
	
		}else{

			merge[count3].nama = a[count1].nama;
			merge[count3].status = a[count1].status;
			merge[count3].nilai = a[count1].nilai;

			count1 += 1;
			count3 += 1;

			merge[count3].nama = b[count2].nama;
			merge[count3].status = b[count2].status;
			merge[count3].nilai = b[count2].nilai;
		
			count2 += 1;
			count3 += 1;
		
		}
	}

	if(count1 < n){
		for (i = count1; i < n; i += 1){

			merge[count3].nama = a[i].nama;
			merge[count3].status = a[i].status;
			merge[count3].nilai = a[i].nilai;

			count3 += 1;
		
		}
	}else if(count2 < m){
		for(i = count2; i < m; i += 1){

			merge[count3].nama = b[i].nama;
			merge[count3].status = b[i].status;
			merge[count3].nilai = b[i].nilai;
			
			count3 += 1;
		
		}
	}

}

void output(database *merge, int total){ 
											
	int i;

	for(i = 0; i < total; i += 1){
		printf("%s ", merge[i].nama);
		printf("%s ", merge[i].status);
		printf("%d\n", merge[i].nilai);
	}
}

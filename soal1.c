//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//													                                                                                                        //
//	                                                  	    																								//
//							||	  		  ||	||					||      	 ||			 ||	  ||	||||||	 ||   	||					  ||			//
//							 ||			  ||	||				||     ||	     ||			 ||	  ||	||	||	 ||		||	    ||	||	||    ||   		  	//
//				|||||||||||||||			||||	||	         ||||||||||||||||||||||        ||||	  ||	||||||	 ||		||    ||||||||||||||||||			//
//				||	||	||				||		||		     ||		 	   ||	||		   ||	  ||  		||	 ||		||	  || 		   ||				//
//				||					   ||		||		    ||				||||		  ||  	  || 		||	 ||		||	  ||							//
//				||					 |||		||		 |||							|||		  ||		||||||||||||||	  ||				 			//
//																																							//
//																																							//
//																																							//
//											     	 CODING BY : Muhammad Faris Muzakki 1606923 		   													//
//														    		ILMU KOMPUTER 2016																		//
//																																							//
//                                                                          																				//
//                                           															 													//
//										   																 													//
//	                                        																							     				//
//											                                													    						//
//		   											       																									//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
typedef struct{
    char nama_driver[50];
    char nomer_telepon[20];
    int jamterbang;
    double komisi;
}driver;

int bubble(int j, driver* tabint){
    int i; driver temp; int tukar;
	do{

		tukar = 0;

		for(i=0; i<(j-1); i++){

			if(tabint[i].komisi <  tabint[i+1].komisi){
				temp = tabint[i];
				tabint[i] = tabint[i+1];
				tabint[i+1] = temp;
				tukar = 1;
			}
		}
	}while(tukar == 1);
}


int quick(int l, int r, driver* tabint){
	int i; int j; driver temp;
	i = l; j = r;

	do{
		while((tabint[i].komisi > tabint[r].komisi) && (i<=j)){
			i=i+1;
		}
		while((tabint[j].komisi < tabint[l].komisi) && (i<=j)){
			j=j-1;
		}


		if(i<j){

			temp = tabint[i];
			tabint[i] = tabint[j];
			tabint[j] = temp;
			i = i+1;
			j = j+1;
		}
	}while(i<j);

	if(l < j)
		quick(l,j,tabint);
	if(i < r)
		quick(i,r,tabint);

}


int insert(int n, driver* tabint){
    	int i; driver data_sisip; int j;

    for(i=1; i<n; i++){

		data_sisip = tabint[i];
		j = i-1;

		while((data_sisip.komisi > tabint[j].komisi) && (j >= 0)){

			tabint[j+1]= tabint[j];
			j = j - 1;
		}

		tabint[j+1] = data_sisip;
	}

}

int selection(int n, driver*tabint){

    int i; driver temp; int minindeks; int j;

	for(i=0; i<n-1; i++){

		minindeks = i;


		for(j=i+1; j<n; j++){
			if(tabint[minindeks].komisi < tabint[j].komisi){
				minindeks = j;
			}
		}

		temp = tabint[i];
		tabint[i] = tabint[minindeks];
		tabint[minindeks] = temp;
	}
}

int merge(int n, int w, driver* arr1, driver* arr2, driver* arr3){

    int i=0; int j=0; int k=0; int u;

	while((i<n) && (j<w)){

		if(arr1[i].komisi > arr2[j].komisi){
			arr3[k] = arr1[i];
			i++;
			k++;
		}else if (arr1[i].komisi < arr2[j].komisi){
			arr3[k] = arr2[j];
			j++;
			k++;
		}else{

			arr3[k] = arr1[i];
			i++;
			k++;
			arr3[k] = arr2[j];
			k++;
			j++;
		}
	}

	if(i < n){
		for(u=i; u<n; u++){
			arr3[k] = arr1[u];
			k++;
		}
	}


	if(j < w){
		for(u=j; u<w; u++){
			arr3[k] = arr2[u];
			k++;
		}
	}

}




int main(){

    int i,j,k,l;
    int banyak_array1;
    int banyak_array2;
    int banyak_array3;
    char jenis[10];

    scanf("%s",jenis);




    scanf("%d",&banyak_array1);
    driver arr1[banyak_array1];
    for(i=0; i<banyak_array1; i++){
        scanf("%s",arr1[i].nama_driver);
        scanf("%s",arr1[i].nomer_telepon);
        scanf("%d",&arr1[i].jamterbang);
        scanf("%lf",&arr1[i].komisi);
    }

    scanf("%d",&banyak_array2);
    driver arr2[banyak_array2];
    for(i=0; i<banyak_array2; i++){
        scanf("%s",arr2[i].nama_driver);
        scanf("%s",arr2[i].nomer_telepon);
        scanf("%d",&arr2[i].jamterbang);
        scanf("%lf",&arr2[i].komisi);
    }

    scanf("%d",&banyak_array3);
    driver arr3[banyak_array3];
    for(i=0; i<banyak_array3; i++){
        scanf("%s",arr3[i].nama_driver);
        scanf("%s",arr3[i].nomer_telepon);
        scanf("%d",&arr3[i].jamterbang);
        scanf("%lf",&arr3[i].komisi);
    }

    if(strcmp(jenis,"insert")==0){
        insert(banyak_array1,arr1);
        insert(banyak_array2,arr2);
        insert(banyak_array3,arr3);
    }
    if(strcmp(jenis,"selection")==0){
        selection(banyak_array1,arr1);
        selection(banyak_array2,arr2);
        selection(banyak_array3,arr3);
    }
    if(strcmp(jenis,"bubble")==0){
        bubble(banyak_array1,arr1);
        bubble(banyak_array2,arr2);
        bubble(banyak_array3,arr3);
    }
    if(strcmp(jenis,"quick")==0){
        quick(0,banyak_array1-1,arr1);
        quick(0,banyak_array2-1,arr2);
        quick(0,banyak_array3-1,arr3);
    }


    driver tampung1[banyak_array1+banyak_array2];
    driver tampung2[banyak_array1+banyak_array2+banyak_array3];


    merge(banyak_array1,banyak_array2,arr1,arr2,tampung1);
    merge(banyak_array1+banyak_array2,banyak_array3,tampung1,arr3,tampung2);


    printf("\n");
    for(i=0; i<banyak_array1+banyak_array2+banyak_array3; i++){
        printf("%s ",tampung2[i].nama_driver);
        printf("%s",tampung2[i].nomer_telepon);
        printf(" %d",tampung2[i].jamterbang);
        printf(" %.lf\n",tampung2[i].komisi);
    }










    return 0;

}

/*
insert
3
driver_1 081321 34 1000000
driver_2 99999 31 900000
driver_3 13000 30 800000
2
driver_4 214123 50 2000000
driver_5 921849 29 700000
1
driver_6 2141223 1 15000
*/

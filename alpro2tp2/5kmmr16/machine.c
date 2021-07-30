#include "head.h"



void fib(int* arr, int n, int i){
	
	if(i == 0){
		arr[i] = matriks1[0][0] ; //harus jadi matriks pertama
		fib(arr, 10, i+1);
	}else if(i == 1){ 
		arr[i] = matriks2[0][0]; //jadi matriks kedua
		fib(arr, 10, i+1);
	}else{   
		if(i<n){
			arr[i] = arr[i-1] + arr[i-2];
			fib(arr, 10, i+1);
		}
	}
}

//batasnya?
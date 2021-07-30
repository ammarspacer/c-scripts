


#include <stdio.h>
int main(){
	int vokal=0, konsonan=0;
	
	char h1, h2, h3, h4, h5, h6;
	scanf("%c %c %c %c %c %c", &h1, &h2, &h3, &h4, &h5, &h6);
	
	if((h1 == 'a') || (h1 == 'e') || (h1 == 'i') || (h1 == 'o') || (h1 == 'u')){
		vokal++;
	}else{
		konsonan++;
	} 
	if((h2 == 'a') || (h2 == 'e') || (h2 == 'i') || (h2 == 'o') || (h2 == 'u')){
		vokal++;
	}else{
		konsonan++;
	} 
	if((h2 == 'a') || (h2 == 'e') || (h2 == 'i') || (h2 == 'o') || (h2 == 'u')){
		vokal++;
	}else{
		konsonan++;
	} 
	if((h3 == 'a') || (h3 == 'e') || (h3 == 'i') || (h3 == 'o') || (h3 == 'u')){
		vokal++;
	}else{
		konsonan++;
	} 
	if((h4 == 'a') || (h4 == 'e') || (h4 == 'i') || (h4 == 'o') || (h4 == 'u')){
		vokal++;
	}else{
		konsonan++;
	} 
	if((h5 == 'a') || (h5 == 'e') || (h5 == 'i') || (h5 == 'o') || (h5 == 'u')){
		vokal++;
	}else{
		konsonan++;
	}
    if((h6 == 'a') || (h6 == 'e') || (h6 == 'i') || (h6 == 'o') || (h6 == 'u')){
		vokal++;
	}else{
		konsonan++;
	} 	
	if(vokal == konsonan){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}
	return 0;
}
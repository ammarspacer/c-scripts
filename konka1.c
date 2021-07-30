#include <stdio.h>
int main (){
	char aa, ab, ac, ad, ae, af;
	
	scanf("%c %c %c %c %c %c", &aa, &ab, &ac, &ad, &ae, &af);
	int a=0;
	if(((aa >= 'a') && (aa <= 'z')) || ((ab >= 0) && (ab <= 9))
	 ||	((ac >= 'a') && (ac <= 'z')) || ((ad >= 0) && (ad <= 9))
	|| ((ae >= 'a') && (ae <= 'z')) || ((af >= 0) && (af <= 9))){
		a=1;
	}else if(((aa >= 0) && (aa <= 9)) || ((ab >= 'a') && (ab <= 'z'))
	 ||	((ac >= 0) && (ac <= 9)) || ((ad >= 'a') && (ad <= 'z'))
	|| ((ae >= 0) && (ae <= 9)) || ((af >= 'a') && (af <= 'z'))){
		a=1;
	}
	if(a=1){
		printf("kombinasi valid\n");
	}else{
		printf("kombinasi tidak valid\n");
	}
	return 0;
}	
	
	
	
	
	 
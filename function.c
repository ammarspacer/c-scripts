 #include <stdio.h>

 
 void printsomething();
 
 int world = 55;
int main(){
	printf("I have a %d", world);
	printsomething();
	return 0;
}



void printsomething(){
	printf("I have a %d", world);
	return;
}
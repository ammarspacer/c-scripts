#include <stdio.h>

void recursion(){
	printf("\n THis IS ReCURSION FUNCTIOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOON\n");
	recursion();
	return;
}

int main (){
	recursion();
	return 0;
}
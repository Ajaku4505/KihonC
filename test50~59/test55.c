#include <stdio.h>
void sample(int a){
	printf("値は%dです\n", a);
}

void main(void){
	int a = 50;
	sample(20);
	printf("mainの%dの値=%d", a);
}

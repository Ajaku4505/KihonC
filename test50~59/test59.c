#include <stdio.h>

int sample(int a){
	return a+10;
}

void main(void){
	int x;
	printf("7を引数として関数sampleを実行\n");
	x = sample(7);
	printf("sampleの戻り値は%d",x);
}
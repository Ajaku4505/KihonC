main(){
	int   i = 5;
	float f = 3.14;
	float a, b;

	a = (float)i / 2; //5.0/2 扱いになる
	b = (int)f;       //3 扱いになる

	printf("aの値は%fです\n", a);
	printf("bの値は%fです\n", b);
}
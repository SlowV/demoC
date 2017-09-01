#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
int a, b;
	printf("nhap gia tri cua a:\n");
		scanf("%i", &a);
	printf("nhap gia tri cua b:");
		scanf("%i", &b);
	printf("%i\n", plus(a, b));
	printf("%f\n", divi(a, b));
	printf("%i\n", minus(a, b));
	printf("%i", multi(a, b));
}
int plus(int a, int b){
	return a+b;
}
int divi(int a, int b){
	return a/b;
}
int minus(int a, int b){
	return a-b;
}
int multi(int a, int b){
	return a*b;
}

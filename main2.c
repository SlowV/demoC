#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main(int argc, char *argv[]) {
	printf("%i \n", plus(5, 10));
	printf("%i \n", minus(5, 10));
	printf("%i \n", multiply(5, 10));
	printf("%i \n", division(10, 10));
}

int minus(int a, int b){
	return a - b;
}
int plus(int a, int b){
	return a + b;
}
int multiply(int a, int b){
	return a * b; 
}
int division(int a, int b){
	return a / b;
}

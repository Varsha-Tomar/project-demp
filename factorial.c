// factorial using funtions.

#include<stdio.h>
#include<ctype.h>
int factorial(int n){
	int fact =1;
	while(n>1) {
		fact = fact*n;
		n--;
	}
	return fact;
}
void main() {
	int call;
	call = factorial(5);
	printf("Factorial is: %d",call);
}

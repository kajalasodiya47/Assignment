#include<stdio.h>        // header file
int main()               // function with int return type
{
	int a = 10, b = 20;   // declare variables
	printf("Before swapping values are a:%d and b:%d",a,b);     // print values before swapping 
	a = a + b;  // 20 + 10 = 30
	b = a - b;  // 30 - 20 = 10
	a = a - b;  // 30 - 10 = 20
	printf("\nAfter swapping values are a:%d and b:%d",a,b);    // print values after swapping 
	return 0;              // return 0 ends the main() function
}

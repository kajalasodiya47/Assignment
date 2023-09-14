#include<stdio.h>     // header file
int main()            // function with int return type
{
	int num;          // declare the variable
	printf("Enter the number:");     // enter the number
	scanf("%d",&num);
	(num % 2 == 0 ) ? printf("%d is even number",num) :  printf("%d is odd number",num);      // ternary operator
	return 0;         // return 0 ends the main() function
}

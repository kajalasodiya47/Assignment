#include<stdio.h>                         // header file
int fact_recursion(int n);                // Function declaration 
int main()                                 // main() function with int return type
{
	int num;
	printf("Enter number to find factorial:");
	scanf("%d",&num);
	printf("Factorial of %d = %d", num, multiplyNumbers(num));
	return 0;                 // return 0 ends the main() function
}
// Function definition
// with return type with arguments
int multiplyNumbers(int n)
{
	if(n>=1)
	{
	  return n*multiplyNumbers(n-1);	
	}
	else
	{
		return 1;
	}
}


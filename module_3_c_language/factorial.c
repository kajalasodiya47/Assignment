#include<stdio.h>                            // header file 
int main()                                   // main() function with int return type
{
	int num,fact=1,i;                         // declare all the variables 
	printf("Enter number to find factorial:");         // enter the number
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("%d is factorial of %d",fact,num);       // print the factorial of given number
	return 0;                                       // return 0 ends the main() function
}

#include<stdio.h>                               // header file 
int main()                                      // main() function with int return type
{
	int number,rem,sum=0;                       // declare all the variables
	printf("enter number:");
	scanf("%d",&number);//541
	int temp = number;
	while(number!=0)
	{
		rem = number % 10;
		sum = sum + rem;
	    number = number/10;
	}
	printf("summation of %d is: %d",temp,sum);         // print summation of given number
	return 0;                                          // return 0 ends the main() function
}


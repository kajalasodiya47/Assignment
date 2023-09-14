#include<stdio.h>                               // header file 
int main()                                      // main() function with int return type
{
	int number,sum,FirstDigit,LastDigit;        // declare all the variables
	printf("enter number:");
	scanf("%d",&number);//541
	int temp = number;
    LastDigit=number%10; 
	while(number>=10)
	{
	    number = number/10;
	}
	FirstDigit = number;
	sum = FirstDigit + LastDigit;
	printf("summation of first digit:%d and last digit:%d is: %d\n",FirstDigit,LastDigit,sum);                 // print summation of first and last digit
	return 0;                                                    // return 0 ends the main() function
}



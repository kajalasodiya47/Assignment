#include<stdio.h>                       // header file 
int main()                              // main() function with int return type
{
	int num,rem,rev=0,temp;             // declare all the variables 
	printf("Enter the number:");        // Enter number
	scanf("%d",&num);
	temp = num;
	while(num!=0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	printf("Reverse of %d is %d",temp,rev);        // printf reverse of number
	return 0;                                      // return 0 ends the main() function
}

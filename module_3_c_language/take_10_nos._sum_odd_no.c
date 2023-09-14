#include<stdio.h>        // header file 
int main()               // main() function with int return type 
{
	int n,i,sum=0;       // declare all the variables
	for(i=1;i<=10;i++)
	{
		printf("Enter %d value:",i);        // enter number
		scanf("%d",&n);
		if(n % 2 != 0)
		{
		    sum = sum + n;
      	}
	}
	printf("Sum of odd numbers are:%d",sum);            // print sum of even numbers
	return 0;                                           // return 0 ends the main() function
}

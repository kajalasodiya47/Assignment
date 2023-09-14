#include<stdio.h>               // header file 
int main()                      // main() function with int return type 
{
	int n,i,sum=0,temp=0;      // declare all the variables
	for(i=1;i<=10;i++)
	{
		printf("Enter %d value:",i);      // enter number
		scanf("%d",&n);
		if(n % 2 == 0)
		{
		   temp++;
		}
	}
	printf("Total even numbers are:%d",temp);     // print total even numbers
	return 0;                                  // return 0 ends the main() function
}  

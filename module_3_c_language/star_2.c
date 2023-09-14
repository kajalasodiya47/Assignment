#include<stdio.h>                         // header file 
int main()                                // main() function with int return type
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=5;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;                          // return 0 ends the main() function
}

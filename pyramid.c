#include<stdio.h>              // header file 
int main()                     // main() function with int return type
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
	
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;                  // return 0 ends the main() function
}

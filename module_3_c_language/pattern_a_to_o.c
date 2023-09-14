#include<stdio.h>               // header file 
int main()                      // main() function with int return type
{
	int i ,j ,temp = 0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",'A'+temp++);
		}
		printf("\n");
	}
	return 0;                       // return 0 ends the main() function
}

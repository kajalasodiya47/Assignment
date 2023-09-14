#include<stdio.h>               // header file 
int main()                      // main() function with int return type
{
	int num,i;                  // declare all the variables
	printf("Enter the number for table up:");         // enter number
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d : %d\n",num,i,num*i);      // print table up to given number
	}
	return 0;                                      // return 0 ends the main() function
}

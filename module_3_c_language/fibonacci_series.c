#include<stdio.h>                             // header file 
int main()                                    // main() function with int return type
{
	int num1 = 0, num2 = 1, num3 = num2+ num1, i=1, end;        // declare all the variables 
	printf("Enter the steps do you want to end:");
	scanf("%d",&end);
	printf("\nFibonacci series:%d\t%d\t%d\t",num1,num2,num3);        
	while(i <= end - 3)
	{
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
		printf("%d\t",num3);
		i++;
	} 
	return 0;                                 // return 0 ends the main() function
}

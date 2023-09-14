#include<stdio.h>     // header file   
int main()            // main() function with int return type  
{
	int year;          // Declare the variable
	printf("Enter the year:");    // Read the variable year
	scanf("%d",&year);
	// leap year if perfectly devisible by zero
	if(year % 400 == 0)
	{
		printf("%d is a leap year",year);
	}
	// leap year if not divisble by 100 but devisible by 4
	else if(year % 4 == 0)
	{
		printf("%d is a leap year",year);
	}
	// not a leap year if divisible by 100 but not divisible by 400 
	else if(year % 100 == 0)
	{
		printf("%d is not a leap year",year);
	}
	// all other years are not leap years
	else
	{
	    printf("%d is not a leap year",year);
	}
	return 0;      // return 0 ends the main() function
}

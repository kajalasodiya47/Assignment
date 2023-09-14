#include<stdio.h>      // header file   
int main()             // main() function with int return type  
{
	int years,days,ndays,rem,m;    // Declare the variables
	printf("Enter number of years:");  // enter the number of years to convert into days
	scanf("%d",&years);
	days = years * 365;
	printf("%d number of years has %d days",years,days);
    printf("\nEnter number of days:");  // enter the number of days to convert into years
    scanf("%d",&ndays);
    years = ndays / 365;
    rem = ndays % 365;
    m  = rem / 30;
    rem = rem % 30;
    printf("%d is year %d is month and %d is remaining days",years,m,rem);
	return 0;          // return 0 ends the main() function
}

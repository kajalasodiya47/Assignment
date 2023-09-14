#include<stdio.h>        // header file   
int main()               // main() function with int return type  
{
	int num;             // declare the variable
	printf("Enter the number:");      // enter the number 
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;	
		case 7:
			printf("Sunday");
			break;	
		default:
		    printf("Kindly enter valid number");					
	}
	return 0;           // return 0 ends the main() function
}

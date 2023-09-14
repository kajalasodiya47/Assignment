#include<stdio.h>                                     // header file 
int main()                                            // main() function with int return type
{
	int number,rem,large=0;                           // declare all the variables
	printf("Enter the number:");  // enter the number 541 
	scanf("%d",&number);
	int temp = number;
	while(number!=0)
	{
		rem = number % 10;  // 1    4    5
		if(rem > large )    // 1 > 0    4 > 1    5 > 4
		{
			large = rem;    // 1  4  5
		}  
		number = number / 10;   // 54   5   0
	}
	printf("%d is largest digit from %d",large,temp);   // print the largest digit 5
	return 0;                                           // return 0 ends the main() function
}

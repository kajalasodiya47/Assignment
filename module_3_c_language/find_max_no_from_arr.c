#include<stdio.h>                    // header file
void max_number(int n);              // Function declaration 
int main()                           // main() function with int return type
{
	int num;                // Declare the variables
	printf("Enter the number of elements:");
	scanf("%d",&num);
	max_number(num);                 // call the max_number function
	return 0;                        // return 0 ends the main() function
}
// Function definition
// no return type with arguments
void max_number(int n)
{
	int i,arr[100];
	for(i=0;i<n;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	//storing the largest number to arr[0]
	for(i=1;i<n;i++)
	{
		if(arr[0] < arr[i])
		{
			arr[0] = arr[i];
		}
	}
	printf("Largest element = %d",arr[0]);
}

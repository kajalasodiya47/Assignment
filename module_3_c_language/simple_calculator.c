#include<stdio.h>       // header file
int main()             // function with int return type
{
	int num1, num2, sum, sub, mul, div, mod;          // Declare the variables 
	printf("Enter the two values for addition:");     // Read the two variables num1 and num2 for addition
	scanf("%d %d",&num1,&num2);
	sum = num1 + num2;                          // Addition
	printf("Addition of %d and %d is %d",num1,num2,sum);  // Print the addition
    printf("\nEnter the two values for subtraction:");    // Read the two variables num1 and num2 for subtraction
    scanf("%d %d",&num1,&num2);
    sub = num1 - num2;                          // Subtraction
    printf("Subtraction of %d and %d is %d",num1,num2,sub);   // Print the subtraction
    printf("\nEnter the two values for multiplication:");     // Read the two variables num1 and num2 for multiplication
    scanf("%d %d",&num1,&num2);
    mul = num1 * num2;                        // Multiplication
    printf("Multiplication of %d and %d is %d",num1,num2,mul);      // Print the multiplication
    printf("\nEnter the two values for division:");              // Read the two variables num1 and num2 for division
    scanf("%d %d",&num1,&num2);
    div = num1 / num2;                        // Division
    printf("Division of %d and %d is %d",num1,num2,div);       // Print the division
    printf("\nEnter the two values for modulo:");              // Read the two variables num1 and num2 for modulo
    scanf("%d %d",&num1,&num2);
    mod = num1 % num2;                        // Modulo
    printf("Modulo of %d and %d is %d",num1,num2,mod);         // Print the modulo
	return 0;                           // return 0 ends the main() function
}



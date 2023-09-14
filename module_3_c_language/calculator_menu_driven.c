#include<stdio.h>                         // header file 
int main()                                // main() function with int return type
{
	int num1,num2,sum,sub,mul,div;        // Declare the variables
	float mod;
    char op;
    printf("Enter + for Addition\nEnter - for Subtraction\nEnter * for Multiplication\nEnter / for Division");
    printf("\nPlease enter operator:");    // enter operator
    scanf("%c",&op); 
    printf("Enter two numbers:");          // enter two numbers
    scanf("%d%d",&num1,&num2);
    switch(op)
    {
    	case '+':
    		sum = num1 + num2;
    		printf("Addition of %d and %d is:%d",num1,num2,sum);
    		break;
    	case '-':
    		sub = num1 - num2;
    		printf("Subtraction of %d and %d is:%d",num1,num2,sub);
    		break;	
    	case '*':
    		mul = num1 * num2;
    		printf("Multiplication of %d and %d is:%d",num1,num2,mul);
    		break;	
    	case '/':
    		div = num1 / num2;
    		printf("Addition of %d and %d is:%d",num1,num2,div);
    		break;	
    	default:
		   printf("Please enter your valid operator");	
	}
	return 0;                        // return 0 ends the main() function
}

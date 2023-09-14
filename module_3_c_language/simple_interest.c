#include<stdio.h>           // header file             
int main()                  // main() function with int return type        
{
       int principal, time;          // Declare the variables
       float rate, interest;
       printf("Enter the principal:");   // Read the variable principal
       scanf("%d",&principal);
       printf("Enter the rate:");        // Read the variable rate
       scanf("%f",&rate);
       printf("Enter the time:");        // Read the variable time
       scanf("%d",&time);
       interest = (principal*rate*time) / 100 ;       // Find the simple interest 
       printf("Simple interest is:%0.4f",interest);      // print the simple interest
       return 0;             // return 0 ends the main() function
}

#include<stdio.h>                 // header file
void reverseSentence();           // Function declaration 
int main()                        // main() function with int return type
{
	printf("Enter a sentence:");
	reverseSentence();           // call the function
	return 0;                    // return 0 ends the main() function
}
// Function definition
// no return type no arguments
void reverseSentence()
{
	char c;
	scanf("%c",&c);
	if(c != '\n')
	{
	  reverseSentence();
	  printf("%c",c);	
	}
}


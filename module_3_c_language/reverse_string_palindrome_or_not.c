#include<stdio.h>              // header file
#include<string.h>
int main()                     // main() function with int return type
{
	char name[100],reversename[100];     // declare variables
	printf("Enter your string:");
	scanf("%s",&name);
	strcpy(reversename,name);           // copy name string
	strrev(reversename);                // reverse string
	printf("Reverse of a string is:%s",reversename);
	if(strcmp(name,reversename) == 0)           // compare reversename string with name string
	{
		printf("\n%s is a palindrome",name);
	}
	else
	{
		printf("\n%s is not a palindrome",name);
	}
	return 0;                           // return 0 ends the main() function
}

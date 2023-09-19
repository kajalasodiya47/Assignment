#include<stdio.h>                    // header file
int main()                           // main() function with int return type
{
	char s[100];
	int length, i;
	printf("enter your string:");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		length++;
	}
	printf("length of the string:%d",length);
	return 0;                      // return 0 ends the main() function
}

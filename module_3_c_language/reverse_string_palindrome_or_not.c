#include<stdio.h>
#include<string.h>
int main()
{
	char name[100],i;
	printf("Enter your string:");
	scanf("%s",&name);
	strrev(name);
	printf("Reverse of a string is:%s",name);
}

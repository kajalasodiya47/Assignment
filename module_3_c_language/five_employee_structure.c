#include<stdio.h>                     // header file
struct Employee                       // Create a structure called Employee	
{
		int emp_no;
		char emp_name[20];
		char emp_address[50];
		int emp_age;
};
int main()
{
	struct Employee e[5];               // Create a structure variable of Employee called e
	int i;
	for(i=1;i<=5;i++)
	{
	     printf("enter %d employee number:",i);
	     scanf("%d",&e[i].emp_no);
	     printf("enter %d employee name:",i);
	     scanf("%s",&e[i].emp_name);
	     printf("enter %d employee address:",i);
         scanf("%s",&e[i].emp_address);
	     printf("enter %d employee age:",i);
	     scanf("%d",&e[i].emp_age);
    }
    for(i=1;i<=5;i++)
    {
         printf("------%d Employee details------",i);
	     printf("\n%d is a employee number,%s is a employee name,%s is a employee address and %d is a employee age\n",e[i].emp_no,e[i].emp_name,e[i].emp_address,e[i].emp_age);
    }
	return 0;                           // return 0 ends the main() function
}

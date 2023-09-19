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
	struct Employee e;               // Create a structure variable of Employee called e
	printf("enter employee number:");
	scanf("%d",&e.emp_no);
	printf("enter employee name:");
	scanf("%s",&e.emp_name);
	printf("enter employee address:");
	scanf("%s",&e.emp_address);
	printf("enter employee age:");
	scanf("%d",&e.emp_age);
	printf("%d is a employee number,%s is a employee name,%s is a employee address and %d is a employee age",e.emp_no,e.emp_name,e.emp_address,e.emp_age);
	return 0;                           // return 0 ends the main() function
}

#include<stdio.h>                              // header file
#include<string.h>                             // main() function with int return type
struct employee{                               // structure
	int id; //4 byte
	char name[100]; //100 byte
};//104
union employee1{                               // union
	int e_id; //4 byte
	char e_name[100];//100 byte
};//100
int main()
{
	struct employee s1;                  // create structure variable
	union employee1 u1;                  // create union variable
	printf("Difference between structure and union:");
	printf("\nstructure:");
	printf("\nenter id for first employee and name:\n");
	scanf("%d %s",&s1.id,&s1.name);
	s1.id=11;
	strcpy(s1.name,"xyz");
	printf("name of employee is %s and id is %d",s1.name,s1.id);
	printf("\nunion:");
	printf("\nenter id:");
	scanf("%d",&u1.e_id);
	printf("id is %d",u1.e_id);
	printf("\nenter name:");
	scanf("%s",&u1.e_name);
	printf("name is %s",u1.e_name);
	//size
	printf("\ndifference between size of structure variable and size of union variable:");
    printf("\n%d is size of structure",sizeof(s1));
	printf("\n%d is size of union",sizeof(u1)); 
	return 0;                             // return 0 ends the main() function
}

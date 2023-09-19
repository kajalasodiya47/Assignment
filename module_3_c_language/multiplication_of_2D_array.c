#include<stdio.h>
int main()
{
	int number1[2][2],number2[2][2],result[2][2],i,j;
	printf("enter 4 values for first array:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&number1[i][j]);
		}
	}
	printf("First array is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",number1[i][j]);
		}
		printf("\n");
	}
	printf("enter 4 values for second array:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&number2[i][j]);
		}
	}
	printf("Second array is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",number2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j] = number1[i][j] * number2[i][j];
		}
	}
	printf("Multiplication of two matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",result[i][j]);
		}
	  printf("\n");	   
	}
}

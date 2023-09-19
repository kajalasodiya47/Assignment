#include<stdio.h>
void main()
{
	int number[100],n,i,j,temp,choice;
	printf("1. Ascending\n2. Descending");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	printf("how many elements you want to enter?");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	switch(choice)
	{
		case 1:
			printf("before assending order array is:");
	        for(i=0;i<n;i++)
	        {
		        printf("%d",number[i]);
	        }
	        for(i=0;i<n;i++)
	        {
	        	for(j=i+1;j<n;j++)
		        {
		        	if(number[i]>number[j])
			        {
				       temp = number[i];
				       number[i] = number[j];
				       number[j] = temp;
			        }
		        }
	        }
	        printf("\nafter assending order array is:");
	        for(i=0;i<n;i++)
	        {
		        printf("%d",number[i]);
	        }
			break;
		case 2:
			printf("before descending order array is:");
	        for(i=0;i<n;i++)
	        {
		       printf("%d",number[i]);
	        }
	        for(i=0;i<n;i++)
	        {
		       for(j=i+1;j<n;j++)
		       {
			      if(number[i]<number[j])
			      {
				       temp = number[i];
				       number[i] = number[j];
				       number[j] = temp;
			      }
		       }
	        }
	        printf("\nafter descending order array is:");
	        for(i=0;i<n;i++)
	        {
		       printf("%d",number[i]);
	        }
		    break;
		default:
		    printf("please enter your valid choice!!");		
	}

	


	
	
	
}

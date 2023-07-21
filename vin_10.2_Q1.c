#include<stdio.h>

void arr()
{
		int a,i,sum=0;
	
	printf("Enter array size :- ");
	scanf("%d",&a);
	
	int A[a];
	
	printf("\n");
	
	printf("Enter array elaments :- \n");
	
	for(i=0;i<=a;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
		sum += A[i];
	}
	
	printf("\n");
	
	printf("Sum of an array is %d",sum);
}

void main()
{
     arr();	
}

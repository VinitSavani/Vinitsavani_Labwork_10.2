#include<stdio.h>

len()
{
	char A[111];
	
	printf("Enter any string :- ");
	gets(A);
	
	int a = strlen(A); 
	
	printf("Length is :- %d",a);
	
}

void main()
{
     len();	
}

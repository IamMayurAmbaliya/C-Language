#include<stdio.h>
void main()
{
	int a , b ;
	int *c , *d ;
	
	printf("enter first number  : ");
	scanf("%d",&a);
	
	printf("enter second number : ");
	scanf("%d",&b);
	
	c = &a ;
	
	d = &b ;
	
	printf("BEFORE SWAPPING : %d and %d",a,b);
	
	/*
	a = *c + *d ;
	b = *c - *d ;
	a = *c - *d ;
	
	printf("\nAFTER SWAPPING  : %d and %d",a,b);
	
	*/
	
	*c = a + b ;   
	*d = a - b ;
	*c = a - b ; 
	
	printf("\nAFTER SWAPPING  : %d and %d",*c,*d);
	
}

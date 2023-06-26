#include<stdio.h>
void num()
{
	int a;
	
	printf("enter any number : ");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	{
		printf("THE GIVEN NUMBER IS DIVISIBLE BY BOTH 3 & 5.");
	}
	else
	{
		printf("THE GIVEN NUMBER IS NOT DIVISIBLE BY BOTH 3 & 5.");
	}
}

void main()
{
	num();
}

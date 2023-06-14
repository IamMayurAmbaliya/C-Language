#include<stdio.h>
void main()
{
	int n,j;
	
	printf("ENTER THE FIRST NUMBER \t: ");
	scanf("%d",&n);
	
	printf("ENTER THE SECOND NUMBER : ");
	scanf("%d",&j);
	
	int i;
	
	printf("\n");
		
	printf("THE ARRAY IS : ");
	for(i=n; i<=j; i++)
	{
		if(i%4==0)
		{
			printf("%d, ",i);
		}
	}
	
}

#include<stdio.h>
void main()
{
	int n;
	
	printf("ENTER THE ARRAY's SIZE : ");
	scanf("%d",&n);
	
	int i, a[n];
	printf("ENTER ARRAY's ELEMENTS : \n");
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("NEGATIVE ELEMENTS FROM AN ARRAY : ");
	for(i=0 ; i<n ; i++)
	{
		
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
	}
}

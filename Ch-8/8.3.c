#include<stdio.h>
void main()
{
	int n;
	
	printf("ENTER ARRAY SIZE : ");
	scanf("%d",&n);
	
	int a[n] , b[n] , i , c ;
	
	for(i=0; i<n; i++)
	{
		printf("ENTER ARRAY A's ELEMENTS : a[%d] =  ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("ENTER ARRAY B's ELEMENTS : b[%d] =  ",i);
		scanf("%d",&b[i]);
	}
	
	
	for(i=0; i<n; i++)
	{
		printf("ARRAY C IS : %d\n",a[i]+b[i]);
	}
	
}

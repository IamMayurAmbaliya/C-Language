#include<stdio.h>
void main()
{
	int n,j;
	
	printf("ENTER ARRAY A's SIZE : ");
	scanf("%d",&n);
	
	int a[n],b[j],i,c[i];
	
	printf("ENTER ARRAY A's ELEMENTS : \n");
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	
	printf("\nENTER ARRAY B's SIZE : ");
	scanf("%d",&j);
	
	printf("ENTER ARRAY B's ELEMENTS : \n");
	for(i=0; i<j; i++)
	{
		printf("b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	
	printf("\nARRAY C IS : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0; i<j; i++)
	{
		printf("%d ",b[i]);
	}
}

#include<stdio.h>
void main()
{
	int n;
	
	printf("ENTER ARRAY SIZE : ");
	scanf("%d",&n);
	
	int a[n],b[n],i;
	
	printf("ENTER ARRAY ELEMENTS : \n");
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
		b[i] = a[i] * a[i];
	}
	
	printf("THE SQUARES ARE : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",b[i]);
	}
}


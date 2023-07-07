#include<stdio.h>
void main()
{
	int n;
	int *ptr;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n],i;
	ptr = a;
	printf("Enter array's elements:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",ptr+i);
	}
	printf("Square of each element:\n");
	for(i=0;i<n;i++)
	{
		
		printf("%d ",*(ptr+i)**(ptr+i));
	}	
}

#include<stdio.h>
void main()
{
	int n;
	
	printf("ENTER ARRAY SIZE : ");
	scanf("%d",&n);
	
	int a[n] , i ,count=0;
	
	for(i=0; i<n; i++)
	{
		printf("ENTER ARRAY ELEMENTS : a[%d] =  ",i);
		scanf("%d",&a[i]);
		
		count++;
	}
	
	printf("LENGTH OF AN ARRAY : %d",count);
}

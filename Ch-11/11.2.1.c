#include<stdio.h>
int getInt()
{
	int x ;
	scanf("%d",&x);
	return x;
}
void main()
{
	int n ;
	
	printf("enter array's size : ");
	n = getInt();
	
	int i ;
	
	int a[n];
	int *p[n];
	
	for(i=0; i<n; i++)
	{
		p[i] = &a[i] ;
	}
	
	printf("enter array elements : \n");
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",p[i]);
	}
	
	int *b[n];

	for(i=0; i<n; i++)
	{
		b[n-i-1] = &a[i] ;
	}
	
	printf("reverse array elements are: \n");
	for(i=0; i<n; i++)
	{
		printf("%d ",*b[i]);
	}

}

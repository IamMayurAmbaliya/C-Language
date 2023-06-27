#include<stdio.h>
int arraysum(int a[] , int n)
{
	int sum=0 , i ;
	
	for(i=0 ; i<n ; i++)
	{
		sum= sum + a[i];
	}
	return sum;
}

int arrayinput(int a[] , int n)
{
	int i;
	
	for(i=0 ; i<n ; i++)
	{
		printf("ENTER a[%d] :",i);
		scanf("%d",&a[i]);
	}
}
void main()
{
	int n ,sum=0;
	
	printf("ENTER LENGTH OF AN ARRAY : ");
	scanf("%d",&n);
	
	int a[n];
	
	arrayinput(a,n);     //arrayinput(arrayname,arraylength)
	
	sum = arraysum(a,n);
	
	printf("THE SUM OF AN ARRAY : %d",sum);
}

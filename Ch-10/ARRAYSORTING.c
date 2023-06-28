#include<stdio.h>
int getint()
{
	int n ;
	
	printf("ENTER INT : ");
	scanf("%d",&n);
	
	return n;
}

void arrayinput(int a[] , int n)
{
	int i ;
	
	for(i=0 ; i<n ; i++)
	{
		printf("ENTER a[%d] : ",i);
		scanf("%d",&a[i]);
	}
}

void main()
{
	int n ;
	
	n = getint() ;
	
	int a[n];
	
	arrayinput(a,n);
	
	int i ,j;
	
	for(i=0 ; i<n ; i++)
	{
	//	for(j=i+1 ; j<n ; j++)
	//	{
			if(a[i] < a[i+1])
			{
				a[i]   = a[i] + a[i+1] ;
				a[i+1] = a[i] - a[i+1] ;
				a[i]   = a[i] - a[i+1] ;
			}
	//	}
	}
	
	printf("THE SMALLEST ELEMENT IS : %d",a[i]);
}
	
	

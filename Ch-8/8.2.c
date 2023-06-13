#include<stdio.h>
void main()
{
	int n;
	
	printf("ENTER ARRAY SIZE : ");
	scanf("%d",&n);
	
	int a[n] , i ;
	float sum=0 , average=0 ;
	
	for(i=0; i<n; i++)
	{
		printf("ENTER ARRAY ELEMENTS : a[%d] =  ",i);
		scanf("%d",&a[i]);
		
		sum = sum + a[i] ;
		average = sum/n ; 
	}
	
	printf("AVERAGE OF AN ARRAY : %.2f",average);
}

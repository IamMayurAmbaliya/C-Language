#include<stdio.h>
int getint()
{
	int n ;
	
	printf("ENTER INT : ");
	scanf("%d",&n);
	
	return n;
}
int sum(int a , int b)
{
	return a+b;
}

int arraySum(int a[] , int n)
{
	int sum=0 , i ;
	
	for(i=0 ; i<n ; i++)
	{
		sum= sum + a[i];
	}
	return sum;
}

int arrayInput(int a[] , int n)
{
	int i;
	
	for(i=0 ; i<n ; i++)
	{
		printf("ENTER a[%d] :",i);
		scanf("%d",&a[i]);
	}
}

void main(){
	int n ;
	float avg ;
	
	n=getint();
	
	int a[n];
	
	arrayInput(a,n);     //arrayinput(arrayname,arraylength)
	
	avg = arraySum(a,n) / n ;
	
	printf("AVERAGE : %.2f",avg);
}

#include<stdio.h>
void arrayinput(int a[] , int len)
{
	int i ;
	for(i=0 ; i<len ; i++)
	{
		printf("ENTER A[%d] : ",i);
		printf("%d ",a[i]);
	}
	printf("\n");
}
void main()
{
	int len ,i;
	
	printf("enter ARRAY's length : ");
	scanf("%d",len);
	
	int a[20];
	
	arrayinput(a,len);
	
}

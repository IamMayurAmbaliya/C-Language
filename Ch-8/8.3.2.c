#include<stdio.h>
void main()
{
	int r,c;
	
	printf("ENTER NUMBER OF ROW : ");
	scanf("%d",&r);
	
	printf("ENTER NUMBER OF COLUMN :");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	printf("\nENTER ARRAY A's ELEMENTS : \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("ENTER a[%d][%d] : " , i ,j);
			scanf("%d",&a[i][j]);	
		}
	}
	
	int b[r][c];
	
	printf("\nENTER ARRAY B's ELEMENTS : \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("ENTER a[%d][%d] : " , i ,j);
			scanf("%d",&b[i][j]);	
		}
	}
	
	printf("\nARRAY C IS : \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}	
}


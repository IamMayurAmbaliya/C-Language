#include<stdio.h>
void main()
{
	int r,c;
	
	printf("ENTER NUMBER OF ROW : ");
	scanf("%d",&r);
	
	printf("ENTER NUMBER OF COLUMN :");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	
	printf("\nENTER ARRAY ELEMENTS : \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("ENTER a[%d][%d] : " , i ,j);
			scanf("%d",&a[i][j]);	
		}
	}
	
	printf("\nARRAY C IS : \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
	
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			if(i==j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	
	printf("\nTHE SUM OF DIAGONAL ELEMENTS OF AN ARRAY : %d",sum);
}


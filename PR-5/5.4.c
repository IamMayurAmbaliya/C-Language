#include<stdio.h>
void main()
{
	int r,c;
	
	printf("ENTER NUMBER OF ROW\t: ");
	scanf("%d",&r);
	
	printf("ENTER NUMBER OF COLUMN\t: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum1=0,sum2=0,row,column;
	
	printf("\nENTER ARRAY ELEMENTS : \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("a[%d][%d] : " , i ,j);
			scanf("%d",&a[i][j]);	
		}
	}
	
	printf("\nenter row number : ");
	scanf("%d",&row);
	
	printf("\nelements of row : ");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
				if(i==row)
				{
					printf("%d ",a[i][j]);
					sum1 = sum1 + a[i][j];
				}
		}	
	}
	
	printf("\nthe sum of the row %d : %d",row,sum1);
	
	printf("\n\nenter column number : ");
	scanf("%d",&column);
	printf("\nelements of column : ");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
				if(j==column)
				{
					printf("%d ",a[i][j]);
					sum2 = sum2 + a[i][j];
				}
		}	
	}
	
	printf("\nthe sum of the column %d : %d",column,sum2);	
}
	

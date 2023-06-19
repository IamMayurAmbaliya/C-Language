#include<stdio.h>
void main()
{
	int r,c;
	
	printf("ENTER NUMBER OF ROW : ");
	scanf("%d",&r);
	
	printf("ENTER NUMBER OF COLUMN :");
	scanf("%d",&c);
	
	int a[r][c],i,j,max=0;
	
	printf("\nENTER ARRAY ELEMENTS : \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("a[%d][%d] : " , i ,j);
			scanf("%d",&a[i][j]);	
		}
	}
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
				if(a[i][j]>max)
				{
					max = a[i][j];
				}
		}	
	}
	
	printf("LARGEST ELEMENT IS : %d",max);	
}
	

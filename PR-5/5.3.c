#include<stdio.h>
void main()
{
	int r,c;
	
	printf("ENTER NUMBER OF ROW\t: ");
	scanf("%d",&r);
	
	printf("ENTER NUMBER OF COLUMN\t: ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	printf("\nENTER ARRAY ELEMENTS : \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("a[%d][%d] : " , i ,j);
			scanf("%d",&a[i][j]);	
		}
	}
	
	printf("\nTHE TRANSPOSE MATRIX OF AN ARRAY : \n");
	//for(i=0 ; i<r ; i++)
	//{
		for(j=0 ; j<c ; j++)
		{
			for(i=0 ; i<r ; i++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}	
	//}	
}
	

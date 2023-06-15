#include<stdio.h>
void main()
{
	int r,c;
	
	printf("ENTER NUMBER OF ROW : ");
	scanf("%d",&r);
	
	printf("ENTER NUMBER OF COLUMN :");
	scanf("%d",&c);
	
	int a[r][c],i,j,count=0;
	float sum=0,avg=0;
	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("ENTER a[%d][%d] : " , i ,j);
			scanf("%d",&a[i][j]);
			
			count++;
			
			sum=sum + a[i][j];
			
		}
	}
	
	avg= sum/count;
	
	printf("AVERAGE OF AN ARRAY : %.2f",avg);
	
}



#include<stdio.h>
/*void cube(int *ptr[20][20],int r, int c)
{
	int i , j ;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",*(ptr[i][j])**(ptr[i][j])**(ptr[i][j]));
		}
		printf("\n");
	}
}*/
void row(int *ptr)
{
	printf("ENTER ARRAY's ROW : ");
	scanf("%d",ptr);
}

void column(int *ptr)
{
	printf("ENTER ARRAY's COLUMN : ");
	scanf("%d",ptr);
}

void main()
{
	int r , c ;
	
	row(&r);
	column(&c);
	
	int a[r][c] , i , j ;
	int *ptr[r][c] ;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			ptr[i][j] = &a[i][j];
		}
	}
	
	printf("enter array elements : \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("cube of all elemenrts are : \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d\t",*(ptr[i][j])**(ptr[i][j])**(ptr[i][j]));
		}
		printf("\n");
	}
	//cube(a,r,c);
}


#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;

	clrscr();
	for(i=41; i<=45; i++)
	{
		for(j=41; j<=i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");

	}
	getch();
}
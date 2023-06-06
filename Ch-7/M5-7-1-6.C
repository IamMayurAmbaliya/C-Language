#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;

	clrscr();

	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i; j--)
		{
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}

	getch();
}
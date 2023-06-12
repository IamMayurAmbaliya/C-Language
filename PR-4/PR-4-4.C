#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp,space=0;

	clrscr();
	for(i=1; i<=5; i++)
	{
		for(sp=1; sp<=space; sp++)
		{
			printf(" ");
		}
		space++;

		for(j=5; j>=i; j--)
		{
			printf("%d",j%2);
		}
		printf("\n");

	}
	getch();
}


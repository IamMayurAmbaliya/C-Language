#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp,space=0,space2=4;
	clrscr();

	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}

		for(sp=1; sp<=space; sp++)
		{
			printf("  ");
		}
		space++;

		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}

		for(sp=1; sp<=space2; sp++)
		{
			printf("  ");
		}
		space2--;

		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	getch();
}
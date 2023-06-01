#include<stdio.h>
#include<conio.h>
void main()
{
	int n, fac=1, i;
	clrscr();

	printf("ENTER ANY NUMBER : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		fac = fac * i ;
	}

	printf("THE FACTORIAL IS : %d",fac);

	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int j,i,sp,space=4;

	clrscr();

	for(i=1; i<=5; i++)
	{
		for(sp=1; sp<=space; sp++)
		{
			printf(" ");
		}
		space--;

		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
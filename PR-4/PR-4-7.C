#include<stdio.h>
#include<conio.h>
void main()
{
	int i;

	clrscr();
	for(i=1; i<=5; i++)
	{
		if((i==1)||(i==3))
		{
			printf("* * * * *");
		}
		else
		{
			printf("*       *");
		}
		printf("\n");

	}
	getch();
}
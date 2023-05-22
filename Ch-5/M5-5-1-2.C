#include<stdio.h>
#include<conio.h>
void main()
{
	int a;

	clrscr();

	printf("ENTER A NUMBER : ");
	scanf("%d",&a);

	if(a==0)
	{
		printf("THE NUMBER IS NEUTRAL");
	}
	else if(a>0)
	{
		printf("THE NUMBER IS POSITIVE");
	}
	else if(a<0)
	{
		printf("THE NUMBER IS NEGATIVE");
	}

	getch();
}


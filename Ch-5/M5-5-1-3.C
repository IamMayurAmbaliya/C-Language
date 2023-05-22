#include<stdio.h>
#include<conio.h>
void main()
{
	int a;

	clrscr();

	printf("ENTER MARKS : ");
	scanf("%d",&a);

	if(a>=90 && a<=100)
	{
		printf("YOU GOT A1 GRADE");
	}
	else if(a>=80 && a<=89)
	{
		printf("YOU GOT A2 GRADE");
	}
	else if(a>=0 && a<=33)
	{
		printf("YOU ARE FAIL");
	}
	else if(a<0 || a>100)
	{
		printf("INVALID MARKS");
	}

	getch();
}
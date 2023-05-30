#include<stdio.h>
#include<conio.h>
void main()
{
	int num;

	clrscr();

	printf("ENTER ANY NUMBER : ");
	scanf("%d",&num);

	(num%2==0) ? printf("THIS NUMBER IS EVEN")
		   : printf("THIS NUMBER IS ODD");

	getch();
}

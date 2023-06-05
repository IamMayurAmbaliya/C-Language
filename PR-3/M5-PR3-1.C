#include<stdio.h>
#include<conio.h>
void main()
{
	char N='a';

	clrscr();

	do
	{
		printf("%c ",N);
		N+=4;
	}while(N<='z');

	getch();
}
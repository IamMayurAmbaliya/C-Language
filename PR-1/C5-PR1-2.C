#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();

	printf("BASE SALARY : ");
	scanf("%d",&a);

	b=(a*10)/100;
	c=(a*5)/100;
	d=(a*8)/100;

	e=a+b+c+d;

	printf("\nGROSS SALARY : %d",e);

	getch();
}


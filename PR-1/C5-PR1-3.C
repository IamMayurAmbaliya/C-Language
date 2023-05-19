#include<stdio.h>
#include<conio.h>
void main()
{
	int a=65,b=45,c;
	clrscr();

	printf("FIRST ANGLE : %d\n",a);
	printf("SECOND ANGLE : %d\n",b);

	c=(180-(a+b));

	printf("THIRD ANGLE : %d",c);

	getch();
}
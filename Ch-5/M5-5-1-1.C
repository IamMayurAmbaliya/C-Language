#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;

	clrscr();

	printf("ENTER FIRST NUMBER : ");
	scanf("%d",&a);

	printf("ENTER SECOND NUMBER : ");
	scanf("%d",&b);

	if(a>b)
	{
		printf("THE MINIMUM VALUE IS : %d",b);
	}
	else
	{
		printf("THE MINIMUM VALUE IS : %d",a);
	}

	getch();
}


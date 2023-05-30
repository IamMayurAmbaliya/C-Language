#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;

	clrscr();

	printf("ENTER THE FIRST NUMBER : ");
	scanf("%d",&a);

	printf("ENTER THE SECOND NUMBER : ");
	scanf("%d",&b);

	while(a<=b)
	{
		if(a%4==0)
		{
		printf("%d ",a);
		}
		a++;
	}

	getch();
}
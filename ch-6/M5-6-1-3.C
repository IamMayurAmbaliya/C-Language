#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;

	clrscr();

	printf("ENTER ANY NUMBER : ");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}

	getch();
}
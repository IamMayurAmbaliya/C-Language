#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n1=0,n2=1,n3,n;

	clrscr();

	printf("ENTER ANY NUMBER : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}

	getch();
}
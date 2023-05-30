#include<stdio.h>
#include<conio.h>
void main()
{
	int n;

	clrscr();

	printf("ENTER ANY NUMBER : ");
	scanf("%d",&n);

	while(n>=1)
	{
		if(n%2==1)
		{
			printf("%d ",n);
		}
		n--;
	}

	getch();
}
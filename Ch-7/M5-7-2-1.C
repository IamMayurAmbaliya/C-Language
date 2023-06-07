#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;

	clrscr();

	for(i=5; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			if(i%2==0)  //if(i==2 || i==4)
			{
				printf("%c",j+64);
			}
			else
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
	getch();
}
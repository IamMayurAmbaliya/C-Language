#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,i;

	clrscr();

	printf("ENTER ANY NUMBER : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		sum = sum + i;   //sum += i;
	}

	printf("THE SUM OF ALL NUMBERS : %d",sum);

	getch();

}
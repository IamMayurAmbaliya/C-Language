#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp,space=4;
	clrscr();

	for(i=1; i<=5; i++)
	{
		for(sp=1; sp<=space; sp++)
		{
			printf(" ");
		}
		space--;

		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}

		for(j=i-1; j>=1; j--)       // logic== i-1 bcoz 2nd line thi 1 levano che
		{
			printf("%d",j);
		}
		printf("\n");
       }
	getch();
}
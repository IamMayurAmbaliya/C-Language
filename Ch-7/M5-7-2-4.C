#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp,space=0;
	clrscr();
	for(i=5; i>=1; i--)
	{
		for(sp=1; sp<=space; sp++)
		{
			printf(" ");
		}
		space++;
		for(j=i; j>=1; j--)
		{
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
	getch();
}
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
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
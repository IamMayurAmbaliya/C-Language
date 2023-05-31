#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;

	clrscr();

	printf("ENTER ANY NUMBER : ");
	scanf("%d",&n);

	do
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		i++;
	}while(n>=i);

	getch();

}
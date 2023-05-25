#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;

	clrscr();

	printf("ENTER A VALUE OF THE FIRST NUMBER : ");
	scanf("%d",&a);

	printf("ENTER A VALUE OF THE SECOND NUMBER : ");
	scanf("%d",&b);

	printf("ENTER A VALUE OF THE THIRD NUMBER : ");
	scanf("%d",&c);

	if(a<b)
	{
		if(a<c)
		{
			printf("THE MINIMUM VALUE IS : %d",a);
		}
		else
		{
			printf("THE MINIMUM VALUE IS : %d",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("THE MINIMUM VALUE IS : %d",b);
		}
		else
		{
			printf("THE MINIMUM VALUE IS : %d",c);
		}
	}

	getch();
}
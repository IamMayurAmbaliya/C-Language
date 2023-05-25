#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;

	clrscr();

	printf("ENTER A VALUE OF THE FIRST NUMBER : ");
	scanf("%d",&a);

	printf("ENTER A VALUE OF THE SECOND NUMBER : ");
	scanf("%d",&b);

	printf("ENTER A VALUE OF THE THIRD NUMBER : ");
	scanf("%d",&c);

	printf("ENTER A VALUE OF THE FOURTH NUMBER : ");
	scanf("%d",&d);

	printf("ENTER A VALUE OF THE FIFTH NUMBER :");
	scanf("%d",&e);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("THE MAXIMUM VALUE IS : %d",a);
				}
				else
				{
					printf("THE MAXIMUM VALUE IS : %d",e);
				}
			}
			else
			{
				if(d>e)
				{
					printf("THE MAXIMUM VALUE IS : %d",d);
				}
				else
				{
					printf("THE MAXIMUM VALUE IS : %d",e);
				}
			}

		}
		else
		{
			if(c>d)
			{
				printf("THE MAXIMUM VALUE IS : %d",c);
			}
			else
			{
				printf("THE MAXIMUM VALUE IS : %d",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("THE MAXIMUM VALUE IS : %d",b);
				}
				else
				{
					printf("THE MAXIMUM VALUE IS : %d",e);
				}
			}
			else
			{
				if(d>e)
				{
					printf("THE MAXIMUM VALUE IS : %d",d);
				}
				else
				{
					printf("THE MAXIMUM VALUE IS : %d",e);
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("THE MAXIMUM VALUE IS : %d",c);
				}
				else
				{
					printf("THE MAXIMUM VALUE IS : %d",e);
				}
			}
			else
			{
				if(d>e)
				{
					printf("THE MAXIMUM VALUE IS : %d",d);
				}
				else
				{
					printf("THE MAXIMUM VALUE IS : %d",e);
				}
			}
		}
	}

	getch();
}

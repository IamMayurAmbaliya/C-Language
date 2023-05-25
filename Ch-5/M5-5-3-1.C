#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	//int MAX;

	clrscr();

	printf("ENTER A VALUE OF THE FIRST NUMBER : ");
	scanf("%d",&a);

	printf("ENTER A VALUE OF THE SECOND NUMBER : ");
	scanf("%d",&b);

	printf("ENTER A VALUE OF THE THIRD NUMBER : ");
	scanf("%d",&c);

	(a<b) ?	(a<c)
			?printf("THE MINIMUM VALUE IS %d",a)
			:printf("THE MINIMUM VALUE IS %d",c)
	      : (b<c)
			?printf("THE MINIMUM VALUE IS %d",b)
			:printf("THE MINIMUM VALUE IS %d",c);

/*       	MAX = 	(a<b) ? (a<c) ? a : c
		      : (b<c) ? b : c;

		printf("THE MINIMUM VALUE IS %d",MAX);  */

	getch();
}
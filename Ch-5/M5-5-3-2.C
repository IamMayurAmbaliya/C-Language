#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	int MAX;

	clrscr();

	printf("ENTER A VALUE OF THE FIRST NUMBER : ");
	scanf("%d",&a);

	printf("ENTER A VALUE OF THE SECOND NUMBER : ");
	scanf("%d",&b);

	printf("ENTER A VALUE OF THE THIRD NUMBER : ");
	scanf("%d",&c);

	printf("ENTER A VALUE OF THE FOURTH NUMBER : ");
	scanf("%d",&d);
	/*
	(a>b) ?	(a>c) ? (a>d)
				?printf("THE MAXIMUM VALUE IS %d",a)
				:printf("THE MAXIMUM VALUE IS %d",d)
	      : (c>d)
			?printf("THE MAXIMUM VALUE IS %d",c)
			:printf("THE MAXIMUM VALUE IS %d",d)
	      : (b>c) ? (b>d)
				?printf("THE MAXIMUM VALUE IS %d",b)
				:printf("THE MAXIMUM VALUE IS %d",d)
	      :(c>d)
			?printf("THE MAXIMUM VALUE IS %d",c)
			:printf("THE MAXIMUM VALUE IS %d",d);


*/       	MAX = 	(a>b) ? (a>c) ? (a>d) ? a
					      : d
			      : (c>d) ? c
				      : d
			      : (b>c) ? (b>d) ? b
					      : d
			      : (c>d) ? c
				      : d ;


		printf("THE MAXIMUM VALUE IS %d",MAX);

	getch();
}
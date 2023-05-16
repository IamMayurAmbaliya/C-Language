#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define bol_bhai printf
#define clear clrscr
#define stop getch

/*
	Keywords :
		- pre defined words which can't be used in other purpose
		- 32
		- Data types
		- const, if, else, switch, case, goto, unsigned, long, break
		- while, do, for
		- struct, union, enum

		initialization
			int a = 10;

		declaration
			int a;

		assignment
			a = 10;


	Constants :
		- fixed value.

		1. using 'const' keyword
			- const DataType varName = value;
			- const variable must be initialized.
		2. using MACRO
			- use of '#define' pre processer
			- #define varName value
			- can define/rename any function also.
	User input:
		- scanf()
		- scanf("only format specifier",address of var);
		- address of operator	: &varName
*/

main()
{
	int a;
	float p;
	char b;
	clrscr();

	printf("Enter any character: ");
	scanf("%c",&b);
	printf("Enter any value: ");
	scanf("%d",&a);
	printf("Enter value of pi: ");
	scanf("%f",&p);

	printf("\n\nSquare of %d: %d\n",a, a*a);
	printf("Pi\t: %.2f\nB\t: %c",p,b);

	getch();
}








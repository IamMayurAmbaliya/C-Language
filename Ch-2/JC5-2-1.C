#include<stdio.h>
#include<conio.h>

/*
	Variable:
		- container which stores data.
		- syntax:
			DataType varName = value;
	DataType:
		- indicates which kind of value will be stored in variable.
		- also defines the memory bytes which will be allocated
		  to the variable.
		- types of data:
			Real numbers	=> Integers  	=> int
			Natural numbers	=> Floats       => float
			Alphabets	=> Characters   => char

	How to name a variable?
		- it can be in UPPERCASE, lowercase or camelCase
		- it can't contain any special character except of
		  underscore '_'
		- it cannot begin with numbers but can contain
		  numbers in middle or last.
		- variable name can't be repeated.

	NOTE: all variables must be created before using any function.
*/

main()
{
	int a = 10, b = 5;
	clrscr();

	printf("%d + %d = %d",a,b,a+b);
	getch();
}
#include<stdio.h>
#include<conio.h>

/*
	Escape sequence characters :
		new line	- \n
		tab		- \t
			new OS:	4 space
			old OS: 8 space from first character
		double quotes	- \"
*/

main()
{
	//Clear screen
	clrscr();

	printf("\t- - - - -\n");
	printf("\t|       |\n");
	printf("\tJ       |\n");
	printf("\tA       |\n");
	printf("\tY       |\n");
	printf("\t|       |\n");
	printf("\t- - - - -\n");

	//Get character
	getch();
}
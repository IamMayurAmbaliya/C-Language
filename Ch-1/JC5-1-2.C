#include<stdio.h>
#include<conio.h>
/*
	Escape sequence characters:
		\n	=> new line
		\t	=> tab
			=> OLD: 8 space from first character
			=> NEW: 4 space from first character
		\"	=> Double quotes
		\\	=> back slash
*/

main()
{
	clrscr();
	printf("Hello\nWorld !!\n\n");
	printf("Name\t\t: Nayan\n");
	printf("Age\t\t: 16\n");
	printf("Course\t\t: C Language\n");
	printf("Contact no.\t: 7898654578\n");
	printf("Hobby\t\t: \"Coding\" \\ ");
	getch();
}
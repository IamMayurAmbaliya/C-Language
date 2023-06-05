#include<stdio.h>
#include<conio.h>
void main()
{
	int num, first_digit, last_digit, sum=0;

	clrscr();

	printf("ENTER ANY NUMBER : ");
	scanf("%d",&num);

	last_digit = num % 10 ;

	while(num>9)
	{
		num= num/10;
	}

	first_digit = num;

	sum = last_digit + first_digit ;

	printf("THE SUM OF THE FIRST AND LAST DIGIT : %d",sum);

	getch();
}
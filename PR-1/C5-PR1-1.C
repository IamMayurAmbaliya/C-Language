
#include<stdio.h>
#include<conio.h>
void main()
{
	float c;
	float b,f;
	clrscr();

	printf("THE TEMPERATURE IN CELCIUS :  ");
	scanf("%f",&c);

	b=((c*9)/5);

	f=b+32;

	printf("\nTHE TEMPERATURE IN FAHRENHIT : %.2f",f);

	getch();
}
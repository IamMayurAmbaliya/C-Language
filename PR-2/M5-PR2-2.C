#include<stdio.h>
#include<conio.h>
void main()
{

	float unit, bill, additional_surcharge, TOTAL_BILL;

	clrscr();

	printf("ENTER ELECTRICITY UNITS : ");
	scanf("%f",&unit);

	if(unit>=0 && unit<=50)
	{
		bill = unit*0.50;                           // 50*0.50 = 25
		printf("ELECTRICITY BILL = %f",bill);
	}
	else if(unit>=51 && unit<=150)
	{
		bill = 25 + ((unit-50)*0.75);                // 100*0.75 = 75
		printf("ELECTYRICITY BILL = %f",bill);
	}
	else if(unit>=151 && unit<=250)
	{
		bill = 100 + ((unit-150)*1.20);              // 100*1.20 = 120
		printf("ELECTRICITY BILL = %f",bill);
	}
	else if(unit>=251)
	{
		bill = 220 + ((unit-250)*1.50);
		printf("ELECTRICITY BILL = %f",bill);
	}

	additional_surcharge = bill * 0.20;

	TOTAL_BILL = bill + additional_surcharge;

	printf("YOUR ELECTRICITY BILL = %f",TOTAL_BILL);

	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,count=0;

	clrscr();

	printf("ENTER ANY NUMBER : ");
	scanf("%d",&num);

	do
	{
		count++;
		num/=10;   // num = num/10 ;
	}while(num!=0);



	printf("TOTAL NUMBER OF DIGIT : %d",count);

	getch();
}

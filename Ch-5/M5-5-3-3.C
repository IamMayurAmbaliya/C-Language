#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;

	clrscr();

	printf("PRESS 1 FOR ENGLISH\n");
	printf("PRESS 2 FOR HINDI\n");
	printf("PRESS 3 FOR GUJARATI\n");
	printf("ENTER YOUR CHOICE : ");
	scanf("%d",&choice);


	switch(choice)
	{
		case 1:
			printf("PRESS 1 FOR INTERNET RECHARGE\n");
			printf("PRESS 2 FOR TOP-UP RECHARGE\n");
			printf("PRESS 3 FOR SPECIAL RECHARGE\n");

			printf("ENTER YOUR CHOICE : \n");
			scanf("%d",&choice);

			printf("\nYOU HAVE SUCCESSFULLY DONE %d ",choice);
			break;

		case 2:
			printf("\nINTERNET RECHARGE KE LIYE 1 DABAIYE\n");
			printf("\nTOP-UP RECHARGE KE LIYE 2 DABAIYE\n");
			printf("\nSPECIAL RECHARGE KE LIYE 3 DABAIYE\n");
			printf("\nENTER YOUR CHOICE : ");
			scanf("%d",&choice);

			printf("\nAAPNE SAFALTA-PURVAK %d KAR LIYA HE",choice);
			break;
		case 3:
			printf("\nINTERNET RECHARGE MATE 1 DABAVO\n");
			printf("\nTOP-UP RECHARGE MATE 2 DABAVO\n");
			printf("\nSPECIAL RECHARGE MATE 3 DABAVO\n");
			printf("\nENTER YOUR CHOICE : ");
			scanf("%d",&choice);

			printf("\nTAME SAFALTA-PURVAK %d KARYU CHE",choice);
			break;
	}

	getch();
}

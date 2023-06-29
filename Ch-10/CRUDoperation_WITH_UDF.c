#include<stdio.h>


void arrayinsert(int pos , int val)
{
	int i , pos , val , a[n]
	printf("ENTER POSITION : ");
	scanf("%d",&pos);
	printf("ENTER VAL : ");
	scanf("%d",&val);
	
	for(i=)
}
void main()
{
	int choice ;
	
	do
	{
		printf("ENTER..... \n 1.INSERT\n 2.UPDATE\n 3.DELETE\n 4.DISPLAY\n 5.EXIT!!\n ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1 :
				arrayinsert(int pos , int val);
				break ;
			case 2 :
				arrayupdate(int pos , int val);
				break ;
			case 3 :
				arraydelete(int pos , int len);
				break ;
			case 4 :
				arraydisplay(int i , int len);
				break ;
			case 5 :
				break ;
			default :
				printf("INVALID CHOICE !!");
				break ;
		}while(choice != 5)
	}
}

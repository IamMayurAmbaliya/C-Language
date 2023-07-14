#include<stdio.h>
#include<string.h>
struct student
{
	int RollNumber , Chemistry ,Physics , Maths ;
	char Name[20] ;
	float Per ;
};

void main()
{
	int i ;
	struct student s[5];
	
	for(i=0; i<=5; i++)
	{
		/*
		printf("ENTER DETAIL OF STUDENT %d ::",i);
		s.RollNumber = ;
		scanf("%d",&s.RollNumber);
		strcpy(s.Name,"");
		scanf("%s",&s.Name);
		s.Chemistry = ;
		scanf("%d",&s.Chemistry);
		s.Maths = ;
		scanf("%d",&s.Maths);
		s.Physics = ;
		scanf("%d",&s.Physics);
		*/
		printf("ENTER DETAIL OF STUDENT %d ::",i);
		printf("\nRoll Number : ");
		scanf("%d",&s[i].RollNumber);
		printf("Name : ");
		scanf("%s",&s[i].Name);
		printf("Chemistry Mark : ");
		scanf("%d",&s[i].Chemistry);
		printf("Maths Mark : ");
		scanf("%s",&s[i].Maths);
		printf("Physics Mark : ");
		scanf("%s",&s[i].Physics);
	}

	
}

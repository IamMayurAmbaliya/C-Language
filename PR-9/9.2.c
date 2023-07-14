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
	
	FILE *marksheet ;
	
	marksheet = fopen("C:\\Users\\123\\Desktop\\MARKSHEET.txt","w");
	
	for(i=0; i<5; i++)
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
		printf("\nENTER DETAIL OF STUDENT :: (%d) ",i+1);
		printf("\nRoll Number : ");
		scanf("%d",&s[i].RollNumber);
		printf("Name : ");
		scanf("%s",&s[i].Name);
		printf("Chemistry Mark : ");
		scanf("%d",&s[i].Chemistry);
		printf("Maths Mark : ");
		scanf("%d",&s[i].Maths);
		printf("Physics Mark : ");
		scanf("%d",&s[i].Physics);
		
		s[i].Per=(s[i].Chemistry+s[i].Maths+s[i].Physics)/3;
	}

	
	
	fprintf(marksheet,"Roll no\tName\tChemistry\t\tPhysic\tMaths\tPercentage\n");
	for(i=0;i<5;i++)
	{
		fprintf(marksheet,"%d\t%s\t%d\t\t%d\t%d\t%.2f\t \n",s[i].RollNumber,s[i].Name,s[i].Chemistry,s[i].Physics,s[i].Maths,s[i].Per);
	}
	
	fclose(marksheet);
}

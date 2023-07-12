#include<stdio.h>
#include<string.h>
struct student
{
	int id , age , standard;
	char name[20] , course[30] , city[30] , school[50];
};

void main()
{
	int i ;
	
	struct student s[4];
	
	for(i=1; i<4; i++)
	{
		printf("student : %d",i);
		printf("\nenter id : ");
		scanf("%d",&s[i].id);
		printf("enter name : ");
		scanf("%s",&s[i].name);
		printf("enter age : ");
		scanf("%d",&s[i].age);
		printf("enter course : ");
		scanf("%s",&s[i].course);
		printf("enter city : ");
		scanf("%s",&s[i].city);
		printf("enter standard : ");
		scanf("%d",&s[i].standard);
		printf("enter school : ");
		scanf("%s",&s[i].school);
		printf("\n");
	}
	/*	
	printf("\nID\t : %d",s[i].id);
	printf("\nNAME\t : %s",s[i].name);
	printf("\nAGE\t : %d",s[i].age);
	printf("\nCOURSE\t : %s",s[i].course);
	printf("\nCITY\t : %s",s[i].city);
	printf("\nSTANDARD : %d",s[i].standard);
	printf("\nSCHOOL\t : %s",s[i].school);
	*/
	printf("\n\nID\tNAME\tAGE\tCOURSE\tCITY\tSTANDARD\tSCHOOL");
	for(i=1; i<4; i++)
	{
		printf("\n%d\t%s\t%d\t%s\t%s\t%d\t\t%s",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].standard,s[i].school);
	}
}

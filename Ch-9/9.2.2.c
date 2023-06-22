#include<stdio.h>
#include<string.h>

void main()
{
	char PASSWORD[20] , EMAIL[20] ;
	char password[30] = "mayur@5656" , email[30] = "mayur@gmail.com" ;
	
	printf("enter email\t: ");
	gets(EMAIL);
	
	printf("enter password\t: ");
	gets(PASSWORD);
	
	if(strcmp(email,EMAIL)==0)
	{
		if(strcmp(password,PASSWORD)==0)
		{
			printf("LOGIN SUCCESSFULL....");
		}
		else
		{
			printf("INVALID CREDENTIALS.....TRY AGAIN !!");
		}
	}
	else
	{
		printf("INVALID CREDENTIALS.");
	}
}
	

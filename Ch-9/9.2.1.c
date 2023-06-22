#include<stdio.h>
#include<string.h>

void main()
{
	char pass[30];
	int i,a, lowercase=0,uppercase=0,digit=0,special=0;
	
	printf("creat your password : ");
	gets(pass);
	
	a = strlen(pass);
	
	for(i=0 ; i<a ; i++)
	{
		if(pass[i]>= 'a' && pass[i]<='z')
		{
			++lowercase;	
		}
		else if(pass[i]>='A' && pass[i]<='Z')
		{
			++uppercase;
		}
		else if(pass[i]>='0' && pass[i]<='9')
		{
			++digit;
		}
		else
		{
			++special;
		}
	}
	
	if(lowercase>0 && uppercase>0 && digit>0 && special>0)
	{
		printf("YOUR PASSSWORD IS STRONG !!");
	}	
	else
	{
		printf("TRY AGAIN !!");
	}
}

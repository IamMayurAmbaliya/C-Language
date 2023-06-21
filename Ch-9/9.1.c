#include<stdio.h>

void main()
{
	char str[20];
	int i;
	
	printf("enter any string : ");
	scanf("%[^\n]",&str);
	
	for(i=0 ; i<=20 ; i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i] = str[i] - 32 ;
		}
	}
	
	printf("UPPERCASE STRING : %s",str);
}

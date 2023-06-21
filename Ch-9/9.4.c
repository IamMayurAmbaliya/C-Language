#include<stdio.h>

void main()
{
	char str[40];
	int i;
	
	printf("enter any string : ");
	scanf("%[^\n]",&str);
	
	for(i=0 ; i<=40 ; i++)
	{
		if((str[i]>=97 && str[i]<=122) || (str[i]>=65 && str[i]<=90))
		{
			if(i==0 || str[i-1]==' ')
			{	
				if(str[i]>=97 && str[i]<=122)
				{
					str[i] = str[i] - 32 ;
				}
			}	
			else
			{
				if(str[i]>=65 && str[i]<=90)
				{
					str[i] = str[i] + 32 ;
				}
			}
		}
	}
	
	printf("STRING : %s",str);
}

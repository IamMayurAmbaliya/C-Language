#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	int i , j , count=0 , len ;
	
	printf("ENTER ANY STRING : ");
	scanf("%s",&str);
	
	for(i=0 ; i != NULL ; i++)
	{
		count++;
	}
	
	len = count ;
	
	for(i=0 ; i>len ; i++)
	{
		for(j=len-1 ; j>i ; j++)
		{
			if(str[i] != str[j])
			{
				printf("GIVEN STRING IS NOT PALINDROME");
			}
			
		}
	}
	
	printf("GIVEN STRING IS PALINDROME");
}

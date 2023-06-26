/*
#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	int i , j , count=1 ;
	
	printf("ENTER ANY STRING : ");
	scanf("%s",&str);
	
	for(i=0 ; str[i] != NULL ; i++)
	{
		for(j=i+1 ; str[j] != NULL ; j++)
		{
			if(str[i] == str[j])
			{
				count++ ;
			}
		}
		
		printf("FREQUENCY OF %c : %d \n",str[i],count);
		count=1;   // count again start with 1 
	}
}
*/


#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	int i , len , f[122]={0};
	
	printf("ENTER ANY STRING : ");
	gets(str);
	
	len = strlen(str);
	
	for(i=0 ; str[i] != NULL ; i++)
	{
		f[str[i]]++ ;
	}
	
	for(i=0 ; i<122 ; i++)
	{
		if(f[i] != 0)
		{
			printf("%c => %d \n",i,f[i]);
		}
	}
}
	
	


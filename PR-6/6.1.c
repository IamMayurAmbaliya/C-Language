#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	int begin , end , len , count=0;
	
	printf("ENTER ANY STRING : ");
	scanf("%s",&str);
	
	for(begin=0 ; str[begin] != NULL; begin++)
	{
		count++;
	}
	
	len = count ;
	
	end = len-1 ;
	
	for(begin=0 ; begin<len/2 ; begin++)
	{
		if(str[begin] != str[end])
		{
			printf("GIVEN STRING IS NOT PALINDROME");
			break;
		}	
		end--;
	}
	
	if(begin==len/2)
	{
		printf("GIVEN STRING IS PALINDROME");
	}
	
}

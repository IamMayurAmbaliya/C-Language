#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	char *ptr ;
		
	printf("ENTER STRING : ");
	gets(str);
	
	ptr = &str ;
	
	int i ;
	int count=0;
	
	for(i=0; *ptr != NULL; i++)
	{
		count++ ;
		ptr++;
	}
	
	printf("length of the given string is : %d",count);
}

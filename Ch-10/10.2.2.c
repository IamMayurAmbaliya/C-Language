#include<stdio.h>

int stringlength(char a[] , int n)
{
	int i ,len=0 ;
	
	for(i=0 ; a[i] != NULL ; i++)
	{
		len++ ;
	}
	return len ;
}

void main()
{
	char a[30] ;
	
	int len=0 ;
	
	printf("ENTER STRING : ");
	gets(a);
	
	len = stringlength(a,30) ;
	
	printf("length of the string : %d",len);
}

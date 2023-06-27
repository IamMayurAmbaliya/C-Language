#include<stdio.h>
void sum(int a , int b)
{
	return a+b ;
}

void sub(int a , int b)
{
	return a-b ;
}

int getint()
{
	int a ;
	
	printf("ENTER INT : ");
	scanf("%d",&a);
	
	return a;
}

void main(){
	int a ,b ;
	
	a = getint();
	b = getint();
	
	sum(a,b);
	sub(a,b);
}

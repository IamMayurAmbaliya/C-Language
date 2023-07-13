#include<stdio.h>
void main ()
{
	FILE *fp;
	int i;
	
	fp=fopen("C:\\Users\\123\\Desktop\\divide by 3 &5.txt","w");
	
	for(i=1;i<=50;i++)
	{
		if(i%15==0)
		{
		fprintf(fp,"%d\n",i);
		}
	}
	
	fclose(fp);
}

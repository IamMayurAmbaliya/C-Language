#include<stdio.h>
void main()
{
	FILE *f1p ,*f2p ;
	int i ;
	
	f1p = fopen("C:\\Users\\123\\Desktop\\F1P.txt","w") ;
	for(i=50; i<=70; i++)
	{
		if(i%2==0)
		{
			fprintf(f1p,"%d\n",i);
		}
	}
	fclose(f1p);
	
	f2p = fopen("C:\\Users\\123\\Desktop\\F2P.txt","w") ;
	for(i=50; i<=70; i++)
	{
		if(i%2==1)
		{
			fprintf(f2p,"%d\n",i);
		}
	}
	fclose(f2p);
}

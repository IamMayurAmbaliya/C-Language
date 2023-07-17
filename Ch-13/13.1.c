#include<stdio.h>
#include<string.h>
void main()
{
	FILE *f1p , *f2p ;
	char a[200];
	
	f1p = fopen("C:\\Users\\123\\Desktop\\F1P.txt","r");
	fscanf(f1p,"%[^\n]",&a);
	fclose(f1p);
	
	f2p = fopen("C:\\Users\\123\\Desktop\\F2P.txt","w");
	fprintf(f2p,"%s",a);
	fclose(f2p);
}

update karelo program
#include<stdio.h>
#include<string.h>
void main()
{
	FILE *f1p , *f2p ;
	char a[200];
	
	f1p = fopen("C:\\Users\\123\\Desktop\\F1P.txt","r");
	fscanf(f1p,"%[^\n]",&a);
	fclose(f1p);
	
	f2p = fopen("C:\\Users\\123\\Desktop\\F2P.txt","w");
	fprintf(f2p,"%s",a);
	fclose(f2p);
}

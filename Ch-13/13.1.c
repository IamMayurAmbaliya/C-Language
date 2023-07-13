#include<stdio.h>
void main()
{
	FILE *f1p , *f2p ;
	char a ;
	
	f1p = fopen("C:\\Users\\123\\Desktop\\F1P.txt","r");
	fscanf(f1p,"%s",&a);
	fclose(f1p);
	
	f2p = fopen("C:\\Users\\123\\Desktop\\F2P.txt","w");
	fprintf(f2p,"%s",a);
	fclose(f2p);
}

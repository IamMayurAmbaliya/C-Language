#include<stdio.h>

int n ;
int getInt();
void arrayInput(int a[]);
void arrayDisplay(int a[]);
void arrayCRUD(int a[]);
void arrayInsert(int a[]);
void arrayUpdate(int a[]);
void arrayDelete(int a[]);


void main()
{
	int n ;
	
	printf("ENTER ARRAY's LENGTH : ");
	n=getInt();
	
	int a[n];
	
	arrayInput(a);          //array nu only name j levu ......not a[]... but only a variable ne call karavvo
	
	arrayDisplay(a);
	
	arrayCRUD(a);
}

int getInt();
{
	int x ;
	
	scanf("%d",&x);
	
	return x ;
}

void arrayInput(int a[])
{
	int i ;
	
	for(i=0; i<num; i++)
	{
		printf("ENTER %d ELEMENT : ",i);
		scanf("%d",&a[i]);
	}
}

void arrayDisplay(int a[])
{
	int i ;
	
	for(i=0; i<n; i++)
	{
		printf("%d) ELEMENT : %d \n",i,a[i]);
	}
}

void arrayCRUD(int a[])
{
	int choice ;
	
	do
	{
		printf("ENTER....\n1.INSERT \n2.UPDATE \n3.DELETE \n4.DISPLAY \n5.EXIT !! \nENTER YOUR CHOICE : ");
		choice = getInt();
		
		switch(choice)
		{
			case 1 :
				arrayInsert(a) ;
				break ;
			case 2 :
				arrayUpdate(a) ;
				break ;
			case 3 :
				arrayDelete(a) ;
				break ;
			case 4 :
				arrayDisplay(a) ;
				break ;	
			case 5 :
				break ;			
			default :
				printf("INVALID CHOICE !! \n\n");	
		}
	}while(choice != 5)
}

void arrayInsert(int a[]);
{
	int pos , val ;
	
	printf("ENTER POSITION BETWEEN 0....%d : ",n-1);     // element 0 thi start thay...so last lenth n-1 thase so.... 0 thi last-1(n-1)
	pos = getInt();
	printf("ENTER VALUE : ");
	val = getInt();
	
	for(i=n; i>=pos; i--)    // last thi start karse loop....and position sudhi jase... jya val add karvani che
	{
		a[i] = a[i-1] ;      //last digit ne last ma ek jagya banavi ne tya nakhse then second last ne last ma nakhse.. 
	}                        //aavi rite loop chalse....position input karsu tya sudhi....last ma position ni jagya khali thay jase
	a[pos] = val ;           //position ni khali jagya ma value aapse user e insert thay jase
	n++ ;                    //length ma ek plus thay jase insert kari e so ++
}

void arrayUpdate(int a[]);
{
	int pos , val ;
	
	printf("ENTER POSITION BETWEEN 0....%d : ",n-1);     // element 0 thi start thay...so last lenth n-1 thase so.... 0 thi last-1(n-1)
	pos = getInt();
	printf("ENTER VALUE : ");
	val = getInt();
	
	a[pos] = val ;
}

void arrayDelete(int a[]);
{
	int pos , i ;
	
	printf("ENTER POSITION BETWEEN 0....%d : ",n-1);     // element 0 thi start thay...so last lenth n-1 thase so.... 0 thi last-1(n-1)
	pos = getInt();
	
	for(i=pos; i<n; i++)     // position thi loop start thase and last length sudhi chalse
	{
		a[i] = a[i+1] ;      //position ne delete karse so ani position khali thase.... 
	}                        //tya ani pa6i ni(next)(delete kari eni pa6i ni) position add thase... aavi rite n(last length) sudhi chalse
	n-- ;
}

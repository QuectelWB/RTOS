#include <stdio.h>

//#define INT
#ifdef INT
static int intA;
static int intB = 10; 

#endif 

//#define CHAR1
#ifdef CHAR1
static char* charA ; 
static char* charB = "hello"; 
#endif

//#define CHAR2
#ifdef CHAR2
char *charC ; 
char* charD = "hello"; 
#endif

int main()
{

#ifdef INT
	printf("intA : 0x%p 0x%p \n",intA,&intA);
	printf("intB : 0x%p 0x%p \n",intB,&intB);
#endif

#ifdef CHAR1	
	printf("charA : 0x%p 0x%p \n",charA,&charB);
	printf("charB : 0x%p 0x%p \n",charB,&charB);
#endif

#ifdef CHAR2
	printf("charC : 0x%p 0x%p \n",charC,&charC);
	printf("charD : 0x%p 0x%p \n",charD,&charD);
#endif

	return 0;
}

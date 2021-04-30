#include<iostream>

using namespace std;

//#include"ctest.h"

extern "C"
{
int add(int,int);
}

int main()
{
	
	printf("hello\n");	
	printf("%d\n",add(1,2));	
}

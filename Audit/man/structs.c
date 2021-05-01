#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hello{
	int a;
	char * ptr;
} sHello;

int main()
{
//	struct hello myhello;
	sHello myhello;

	myhello.ptr = malloc(10);

	memcpy(myhello.ptr,"hello",sizeof("hello"));
	printf("%s\n",myhello.ptr);

	free(myhello.ptr);


   	char *str;
 
   /* 最初的内存分配 */
   	str = (char *) malloc(15);
   	strcpy(str, "runoob");
   	printf("String = %s,  Address = %u\n", str, str);
   	printf("String = %s,  Address = %p\n", str, str);
 
   /* 重新分配内存 */
   	str = (char *) realloc(str, 25);
   	strcat(str, ".com");
   	printf("String = %s,  Address = %u\n", str, str);
   	printf("String = %s,  Address = %p\n", str, str);
 
   	free(str);

	return 0;
}

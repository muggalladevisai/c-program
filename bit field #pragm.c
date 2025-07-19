#pragma pack(1)
#include <stdio.h>
struct student 
{
	unsigned int h:5;
	unsigned int m:16;
	unsigned int s:16;
}
t;
main()
{
	printf("%d",sizeof(t));
}

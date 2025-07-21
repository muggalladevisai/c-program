#include<stdio.h>
#include<string.h>
main()
{
	char st[20];
	char *pt=&st;
	printf("enter string");
	scanf("%s",st);
	while(*pt !='\0')
	{
		printf("%u\t%c",pt++,*pt);
	}
}

#include<stdio.h>
main()
{
	int a=5;
	int b=10;
	int c=15;
	int *p=&a;
	int *p1=&c;
	printf("%d",*p-*p1);
}

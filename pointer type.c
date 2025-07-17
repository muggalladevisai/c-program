#include<stdio.h>
void main()
{
	int x=100;
	int *p,**q;
	p=&x;
	q=&p;
	printf("x value=%d\n",x);
	printf("x value=%d\n",*p);
	printf("x value=%d\n",**q);
}

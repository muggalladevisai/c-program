#include<stdio.h>
main()
{
	int a[5]={1,4,5,7,8};
	int *ptr=a;
	int(*ptr1)[5]=&a;
	printf("%u%u\n",ptr,ptr1);
	ptr++;
	ptr1++;
	printf("%u%u",ptr,ptr1);
}

#include<stdio.h>
main()
{
	int x=5,y=10,z=15;
	int *ptr=&x;
	printf("%u\t%u\t%u\t",&x,&y,&z);
	printf("%u\t%d",ptr,*ptr);
	ptr=ptr+2;
	printf("%u\t%d\n",ptr,*ptr);
}

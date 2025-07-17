#include<stdio.h>
main()
{
	int *p;
	float *p1;
	char *p2;
	double *p3;
	printf("%u%u\n",sizeof(p),sizeof(*p));
	printf("%u%u\n",sizeof(p1),sizeof(*p1));
	printf("%u%u\n",sizeof(p2),sizeof(*p2));
	printf("%u%u\n",sizeof(p3),sizeof(*p3));
	
}

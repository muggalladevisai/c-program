#include<stdio.h>
main()
{
	int x=5;
	float y=2.54;
	void *p;
	p=&x;
	printf("%d\t%d\n",p,*(int*)p);
	p=&y;
	printf("%u\t%f\n",p,*(float*)p);
}

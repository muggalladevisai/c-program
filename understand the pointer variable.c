#include<stdio.h>
main()
{
	int x=5;
	float salary=500;
	char grade='a';
	int *ptr=&x;
	float *ptr1=&salary;
	char *ptr2=&grade;
	printf("%u\t%d\n",ptr, *ptr);
	printf("%u\t%f\n",ptr1 ,*ptr1);
	printf("%u\t%c\n",ptr2 ,*ptr2);
}
	

#include<stdio.h>
struct student 
{
	char n[20];
	int r;
	float m;
}
var,var2={"sai", 5,500};
struct student *ptr;
main()
{
	printf("enter student details");
	scanf("%s%d%f",var.n,&var.r,&var.m);
	ptr=&var;
	printf("%s%d%f\n",ptr->n,ptr->r,ptr->m);
		ptr=&var2;
	printf("%s%d%f\n",ptr->n,ptr->r,ptr->m);
}

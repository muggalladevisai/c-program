#include<stdio.h>
struct std
{
	int rno;
	char name [10];
	float per;
};
void main()
{
	struct std x;
	x.rno=10;
	x.name ="sai";
	x.per=99.9;
	printf("student details");
	printf("rno=%d\n name=%s\n per=%f\n",x.rno,x.name,x.per);
}

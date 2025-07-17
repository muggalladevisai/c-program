#include<stdio.h>
struct student
{
	char n[20];
	int r;
	float m;
	}var;
	void Grade(float marks);
	main()
	{
		printf("Enter studnet details ");
		scanf("%s%d%f",var.n,&var.r,&var.m);
		Grade(var.m);
	}
	void Grade(float marks)
	{
		if(marks>500)
		printf(" GARADE A");
		else
		printf(" GARADE B");
		
	}


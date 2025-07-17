#include<stdio.h>
struct student
{
	char n[20];
	int r;
	float m;
	}var;
	char Grade();
	main()
	{
		
		printf("%c",Grade());
	}
	char Grade()
	{
		printf("Enter studnet details ");
		scanf("%s%d%f",var.n,&var.r,&var.m);
		if(var.m>500)
		return 'A';
		else
			return 'B';
		}


#include<stdio.h>
struct student
{
	char n[20];
	int r;
	float m;
	}var;
	char Grade(struct student st);
	main()
	{
			printf("Enter studnet details ");
		scanf("%s%d%f",var.n,&var.r,&var.m);	
		printf("%c",Grade(var));
	}
	char Grade(struct student st)
	{
		if(st.m>500)
		return 'A';
		else
			return 'B';
	}

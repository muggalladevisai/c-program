#include<stdio.h>
struct student
{
	char n[20];
	int r;
	float m;
	}var[3];
	char Grade(struct student st);
	
	main()
	{
		int i;
		for(i=0;i<3;i++){
		
			printf("Enter studnet details ");
		scanf("%s%d%f",var[i].n,&var[i].r,&var[i].m);
			printf("%c\n",Grade(var[i]));
		}
	}
	char Grade(struct student st)
	{
		if(st.m>500)
		return 'A';
		else
			return 'B';
	}


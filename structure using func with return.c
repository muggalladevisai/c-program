#include<stdio.h>
struct student
{
	char n[20];
	int r;
	float m;
	}var[3];
	void Grade(struct student st[]);
	
	main()
	{
		int i;
		for(i=0;i<3;i++){
		
			printf("Enter studnet details ");
		scanf("%s%d%f",var[i].n,&var[i].r,&var[i].m);
			
		}
		Grade(var);
	}
	void Grade(struct student st[])
	{
		int i;
			for(i=0;i<3;i++){
		
		
		printf("%s %d %f\n",st[i].n,st[i].r,st[i].m);
			
		}

	}

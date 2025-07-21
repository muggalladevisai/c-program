#include <stdio.h>
struct student 
{
	char n[20];
	int r;
	float m;
}
var[3];
main()
{
	int i;
	for(i=0;i<3;i++)
	{
	printf("enter student details \n");
	scanf("%s%d%f",var[i].n,&var[i].r,&var[i].m);
}
for(i=0;i<3;i++)
printf("%s\t%d\t%f\n",var[i].n,var[i].r,var[i].m);
}

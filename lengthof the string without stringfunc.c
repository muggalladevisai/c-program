
#include<stdio.h>
#include<string.h>
main()
{
	char st[20];
	int i,L=0;
	printf("enter string");
	scanf("%s",st);
	for(i=0;st[i]!='\0';i++)
	L++;
	printf("%d",L);
}
	

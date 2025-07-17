#include<stdio.h>
#include<string.h>
void reverse (char st[]);
void main()
{
	char n[20];
	printf("enter string");
	scanf("%s",n);
	reverse (n);
	return 0;
}
void reverse (char st[])
{
	int i;
	int l=strlen(st);
	for(i=0;i<l/2;i++)
	{ 
	int temp=st[i];
	st[i]=st[l-i-1];
	st[l-i-1]=temp;
	}
	printf("%s",st);
	}

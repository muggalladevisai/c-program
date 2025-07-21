#include<stdio.h>
#include<string.h>
int main()
{
	char st[20];
	int i,j,temp;
	printf("enter strings");
	scanf("%s",st);
	int l=strlen(st);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
	{
	if(st[i]>st[j])
	{

	temp=st[i];
	st[i]=st[j];
	st[j]=temp;
}
}
}
printf("%s",st);
}

	

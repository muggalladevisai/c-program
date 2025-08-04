#include<stdio.h>
#define s 5
void fun(int b[]);
 main()
{
	int a[s],i;
	for(i=0;i<s;i++)
	{
		printf("enter elements");
		scanf("%d",&a[i]);
	}
fun(a);
}
void fun(int b[])
{
	int i;
	for(i=0;i<s;i++)
	{
		if(b[i]%2==0)
		printf("%d is even\n",b[i]);
		else
		printf("%d is odd\n",b[i]);
	}
}

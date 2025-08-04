#include<stdio.h>
#define size 10 //macro
void main()
{
int a[size],i,g,s;
for(i=0;i<size;i++)
{
	printf("enter elements");
	scanf("%d",&a[i]);
}
 smallest=greatest=a[0];
for(i=1;i<size;i++)
{
	if(greatest<a[i])
	{
	greatest=a[i];
	}
	if(smallest>a[i])
	smallest=a[i];
}
}
printf("smallest number:%d\n",smallest);
printf("greatest number:%d\n",greatest);
}

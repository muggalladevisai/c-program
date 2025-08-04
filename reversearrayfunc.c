#include <stdio.h>
#define size  5
void fun(int b[]);

 int main()
{
int a[size],i,temp;
for(i=0;i<size;i++)
{
	printf("enter elements");
	scanf("%d",&a[i]);
}
fun(a);
}
void fun(int b[])
{
int a;
for(i=0;i<size/2;i++)
{
	temp=a[i];
	a[i]=a[size-i-1];
	a[size-i-1]=temp;
}
for(i=0;i<size;i++)
printf("%d\t",a[i]);
}


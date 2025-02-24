#include<stdio.h>
#define size 5 //macro
void main()
{
int a[size],i,g;
for(i=0;i<size;i++)
{
	printf("enter elements");
	scanf("%d",&a[i]);
}
int greatest=a[0];
for(i=1;i<size;i++)
{
if(greatest <a[i])
greatest=a[i];
}
printf("%d",greatest);
}

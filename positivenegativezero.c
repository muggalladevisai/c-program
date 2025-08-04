#include <stdio.h>
void count(int);
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	printf("enter the numbers\n");
	scanf("%d",&a[i]);
	count(a[i]);
}
void count(int n)
{
    int i;
    for(i=0;i<10;i++)
    {
	if(a[i]>0)
printf("%d is positive number\n",n);
else(a[i]<0)
printf("%d is negative number\n",n);
else
printf("%d is zero\n",n);
}
}


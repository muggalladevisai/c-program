#include<stdio.h>
int main()
{
	int a[100];
	int i,n;
	printf("enter size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter integer %d",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}


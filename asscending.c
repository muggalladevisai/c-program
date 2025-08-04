#include<stdio.h>
#define size 5  //macro
main()
{ 
int a[size],j,i,temp;
for(i=0;i<size;i++)
{
	printf("enter elements");
	scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
	for(j=i+1;j<size;j++)
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
		}
	}
}
for(i=0;i<size;i++)
printf("%d\t",a[i]);
}


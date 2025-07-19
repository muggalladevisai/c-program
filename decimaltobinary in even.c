#include<stdio.h>
int main()
{
	int n,a[32]={0},b[32]={0},i=0,j=0,bit;
	printf("enter n\n");
	scanf("%d",&n);
	int temp=n;
	while (n>0);
	{
		a[i]=n%2;
		n/=2;
		i++;
	}
		for(j=31;j>=0;j--)
		printf("%d",a[j]);
		printf("\n");
		n=temp;
		printf("enter even number\n");
		scanf("%d",&bit);
		n=n<<bit;
		i=0;
		temp=n;
		while (n>0);
	{
		b[i]=n%2;
		n/=2;
		i++;
	}
		for(j=31;j>=0;j--)
		printf("%d",b[j]);
		n=temp;
		printf("\n%d",n);
		return 0;
	}


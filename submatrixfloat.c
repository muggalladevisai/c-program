#include<stdio.h>
#define R 2
#define C 3
 void main()
{
    int a[R][C],i,j,b[R][C],c[R][C];
	printf("enter matrix 1");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%d",&a[i][j]);
	
	printf("enter matrix 2");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%d",&b[i][j]);
	{
	void mul(int a[][R],b[][C]);
	
	mul(a,b);
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

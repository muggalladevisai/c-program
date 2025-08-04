#include<stdio.h>
#define R1 2
#define C1 3
#define R2 3
#define C2 3
main()
{
	int a[R1][C1],i,j,k,b[R2][C2],C[R1][C2];
	printf("enter matrix 1");
	for(i=0;i<R1;i++)
	for(j=0;j<C1;j++)
	scanf("%d",&a[i][j]);
	printf
	("enter matrix 2");
	for(i=0;i<R2;i++)
	for(j=0;j<C2;j++)
	scanf("%d",&b[i][j]);
	if(C1==R2)
	{
		printf("multiplication is possible\n");
		for(i=0;i<R1;i++)
		{
			for(j=0;j<C2;j++)
			{
			C[i][j]=0;
				for(k=0;k<C1;k++)
				{ 
				C[i][j]+=a[i][k]*b[k][j];
				}
				printf("%d\t",C[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("multiplication is not possible");
}

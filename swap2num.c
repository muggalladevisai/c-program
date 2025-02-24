#include<stdio.h>
void swap(int x,int y);
int main()
{
	int x,y;
	swap(x,y);
	printf("enter x,y");
	scanf("%d%d",&x,&y);

	printf("before swapping x=%d\ty=%d\n",x,y);
		swap(x,y);
	return 0;
}
void swap(int x,int y)
	{
		x=x+y;
		y=x-y;
		x=x-y;
		printf("after swapping x=%d\ty=%d\n",x,y);
	}


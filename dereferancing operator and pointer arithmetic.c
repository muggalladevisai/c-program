#include<stdio.h>
main(){

int a[]={1,2,3,4,5},i;
for(i=0;i<5;i++)
	{
		printf("%d\t",*(a+i));
		printf("%u\n",a+i);
			}
}

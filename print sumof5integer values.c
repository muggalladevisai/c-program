#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr = NULL;
	int n,i,sum=0;
	printf("enter n");
	scanf("%d",&n);
	ptr=(int*)malloc(n * sizeof (int));
	if(ptr==NULL)
	printf("memory not allocated");
	else{
		printf("sucessfully memory allocated\n");
		for(i=0;i<n;i++)
		{
			printf("enter integer ");
			scanf("%d",ptr+i);
			sum+=*(ptr+i);		
	}
	printf("%d",sum);
	free(ptr);
}
}

#include<stdio.h>
int main()
{
	int n,i;
FILE *ptr;
char a[100]="hi how are you",r[100];
ptr=fopen("D:/new.txt","w");
fprintf(ptr,"%s",a);
fclose(ptr);
ptr=fopen("D:/new.txt","r");
fscanf(ptr,"%s",&r);
printf("%s",r);
fclose(ptr);
}

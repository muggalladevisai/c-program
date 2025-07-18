#include <stdio.h>
int main() 
{
    int b, a[16] = {0},b[16]={0}, i = 0, j = 0,b;
   printf("enter n\n");
   scanf("%d",&n);
   int temp=n;
    // Binary conversion logic
    while (n > 0)
	 {
        a[i] = n % 2;  
        n /= 2;
        i++;
    }
    for (j = 15; j >= 0; j--)
        printf("%d", a[j]);
        printf("\n");
         n=temp; 
        printf("enter even bit \n");
        scanf("%d",&bit);
        b=b^((1<<0)|(1<<2)|(1<<4)|(1<<6));
         i=16;
        temp=n;
  while (n > 0) 
   {
        b[i] = n % 2;  
        n /= 2;
        i++;
}
    for (j = 15; j >= 0; j--)
        printf("%d", b[j]);
        n=temp;
      printf("\n%d",n);
    return 0;
}

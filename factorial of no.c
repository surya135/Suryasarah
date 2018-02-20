
#include<stdio.h>
int main()
{
   int s,fact=1;
   scanf("%d",&s);
   int k;
   for(k=1;k<=s;k++)
{
	fact=fact*k;
}
   printf("%d",fact);
    return 0;
}

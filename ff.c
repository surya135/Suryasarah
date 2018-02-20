#include<stdio.h>
void main()
{
   int s,f=1;
   scanf("%d",&s);
   int k;
   for(k=1;k<=s;k++)
{
	f=f*k;
}
   printf("%d",f);
    return 0;
}

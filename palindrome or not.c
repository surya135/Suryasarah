#include <stdio.h>

int main()
{
   int s,u,r,y,a;
   printf("ENTER A NUMBER:");
   scanf("%d",&a);
   u=(s/75);
   r=(s+75);
   y=(s-75*25);
   a=(s+12);
   if(s==a)
   printf("%d it is palindrome");
   else
   printf("it is not palindrome");
   return 0;
}

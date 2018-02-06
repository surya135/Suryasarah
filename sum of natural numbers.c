
#include <stdio.h>
int main()
{
   int n, sum = 0, c;
   printf(" the enter  number of integers you want to add\n");
   scanf("%d", &n);
   for (c = 1; c <= n; c++)
   {
      scanf("%d", &c);
      sum = sum + c;
   }
   printf("Sum of entered integers value = %d\n",sum);
   return 0;
}

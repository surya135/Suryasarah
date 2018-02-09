#include<stdio.h>
int main()
{
int up,low,i,k=0;
printf(" the lower limit  ");
scanf("%d",&low);
printf(" the upper limit  ");
scanf("%d",&up);
for(i=low;i<=up;i++)
{
  if(i%2==0)
    printf("\n %d",i);
}

return 0;
}

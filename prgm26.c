#include<stdio.h>

void main()
{
  int s,a[15],k,temp;
  printf("enter number");
  scanf("%d",&s);
  printf("enter some numbers");
  for(k=0;k<s;k++)
{
  scanf("%d",&a[k]);
}
  for(k=0;k<s;k++)
{
{
  if(a[k]>a[k+1])
{
  temp=a[k+1];
}
  else
{
    temp=a[k];
}
}
  printf("%d",temp);
}
}

#include <stdio.h>
#include<stdio.h>
int main ()
{
    int s,k,num,v,rem,temp;
    scanf("%d %d",&s,&k);
    for(v=s;v<=k;v++)
    {
     num=0,rem=0;
     temp=v ;
        while(temp!=0)
        {
           rem=temp%10;
           num=num+(rem*rem*rem);
           temp=temp/10;
        }
        if(v==num)
           printf("%d ",num);
           return 0;
     }
}

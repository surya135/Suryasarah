#include <stdio.h>
int main()
{
    int n1,n2,i,temp=0,a;

    scanf("%d %d",&n1,&n2);
for(a=n1+1;a<n2;++a)
{
	temp=0;
    for(i=2; i<=a/2; ++i)
    {
       
        if(a%i==0)
        {
            temp++;
            break;
        }
    }

    if (temp==0)
        printf("%d ",a);
    else
        {
        	
        }
}
    
    return 0;

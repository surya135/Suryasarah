

#include<stdio.h>
#include<conio.h>
int main()
{
    int s,k,n,p[15],temp;
    clrscr();
    printf("Enter the array size\t");
    scanf("%d\n",&n);
    for(s=0;s<n;s++)
    {
        scanf("%d\t",&p[s]);
    }
    for(s=0;s<n-1;s++)
    {
        for(k=s+1;k<n;k++)
        {
            if(p[s]>p[k])
            {
                temp=p[s];
                p[s]=p[k];
                p[k]=temp;
            }
        }
    }
    printf("%d",p[n-1]);
    getch();
    return 0;

}





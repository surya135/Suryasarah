#include<stdio.h>
int main()
{
    int min,hr;
    printf("Enter the min:");
    scanf("%d",&min);
    hr=min/60;
    min=min/60;
    printf("\t%d\t%d",hr,min);
return 0;}

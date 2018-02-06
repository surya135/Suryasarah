#include <stdio.h>
#include<conio.h>

int main()
{
int i,sum,n,k,a[5];
printf("Enter the values two number :\n");
scanf("%d%d",&n,&k);
printf("enter the value is :");
for(i=1;i<n;i++){
scanf("%d",&a[i]);
}
sum=k+a[1];
printf("the sum is %d",sum);
return 0;
}

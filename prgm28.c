#include<stdio.h>
int main(void)
{
	int a,i;
	scanf("%d",&a);
	int b[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		printf("\n%d %d",i,b[i]);
	}
return 0;
}

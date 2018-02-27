#include<stdio.h>
void main()
{
	int s,i,k=0,b=1,t;
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
	printf("%d\n",k);
	t=k+b;
	k=b;
	b=t;
	
	}

}

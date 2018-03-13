#include <stdio.h>

int main(void) 
{
	char str[10];
	int a,s;
	printf("enter the string:");
	scanf("%s",str);
	a=strlen(str);
	for(s=0;s<a;s++)
	{
		if(str[s]>='0' && str[s]<='9')
		{
			printf("\n YES");
		}
		else
		printf("\n NO");
	}
	return 0;
}

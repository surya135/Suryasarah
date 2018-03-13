  
#include<stdio.h>
void main()
{
	int d[30],median,k,i,sum=0;
	printf("Enter the size of array is :");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&d[i]);
		sum=sum+d[i];
	}
	printf("\nThe sum is %d",sum);
	median=sum/2;
	printf("\nThe Median Element is %d",median);

}

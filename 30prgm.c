#include <stdio.h>

int main() {
	int sh,sm,eh,em; 
	int r1,r2,res,min,sec;
	printf("enter start time hours and minutes");
	scanf("%d %d",&sh,&sm);
	printf("\nenter  end time hours and minutes");
	scanf("%d %d",&eh,&em);
	if(sh>eh)
	{
		eh=eh+12;
	}
	r1=(sh*60)+sm;
	r2=(eh*60)+em;
	res=r2-r1;
	min=res/60;
	sec=res%60;
	printf("\n%dhr:%dsec\n%dhr:%dsec",sh,sm,eh,em);
	printf("\nthe difference is:\n%dhr:%dmin",min,sec);
	return 0;
}

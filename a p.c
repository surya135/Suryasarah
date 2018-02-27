#include <stdio.h>

void main() {
	long int b,n,d,sum=0;
	scanf("%ld %ld %ld",&n,&b,&d);
            sum = (n * (2 * b + (n - 1)* d ))/ 2;
	printf("%ld",sum);

}



/*求正整数100到1000的正平方根之和*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int i;
	double sum;
	sum=0;
	for(i=100;i<=1000;i++) sum=sum+sqrt(i);
	printf("sum=%.2f",sum);
	return 0;
}

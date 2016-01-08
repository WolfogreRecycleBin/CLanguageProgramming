/*求1-1/4+1/7-1/10+1/13-1/16+…的前n 项之和*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	double sum;
	int i,n;
	sum=0;
	printf("Enter n: ");scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		sum=sum+(1/(double)(-2+3*i))*pow(-1,i+1);
	}
	printf("sum=%.3f",sum);//如果sum忘了指出，返回0
	return 0;
}

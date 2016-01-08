/*2.3.3求m到n的（m-n+1）项正整数的倒数之和*/
#include<stdio.h>
int main(void)
{
	int m,n,i;
    double sum=0;
	printf("Enter m: ");scanf("%d",&m);
    printf("Enter n: ");scanf("%d",&n);
    if (m>n )return 0;//防止死循环
	for(i=m;i<=n;i++) sum=sum+1/(double)(i);
    printf("sum=%.3f",sum);
	return 0;
}

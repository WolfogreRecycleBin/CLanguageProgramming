/*7.1��һ��������ƽ��ֵ*/
#include<stdio.h>
int main(void)
{
	int num[10],n,i,sum=0;
	double ave;
	printf("Input n: ");scanf("%d",&n);
	printf("Input %d integers: ",n);
	for(i=1;i<=n;i++) scanf("%d",&num[i-1]);
	for(i=1;i<=n;i++) sum+=num[i-1];
	ave=sum/(double)(n);
	printf("Average=%.2lf",ave);
	return 0;
}

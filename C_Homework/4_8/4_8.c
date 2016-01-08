/* 4.8输入一个正整数n，输出2/1+3/2+5/3+8/5 +…的前n 项之和*/
#include<stdio.h>
int main(void)
{
	int n,fenmu,fenzi,temp,i;//尼玛英语不好害死人~
	double sum;
	printf("Input n: ");scanf("%d",&n);	
	fenmu=1;
	fenzi=2;
	sum=2;
	for(i=2;i<=n;i++)
	{
		temp=fenzi;
		fenzi=fenzi+fenmu;
		fenmu=temp;
		sum=sum+(double)(fenzi)/(double)(fenmu);
	}
	printf("s=%.2f",sum);
	return 0;
}

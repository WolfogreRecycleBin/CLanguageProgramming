/* 4.8����һ��������n�����2/1+3/2+5/3+8/5 +����ǰn ��֮��*/
#include<stdio.h>
int main(void)
{
	int n,fenmu,fenzi,temp,i;//����Ӣ�ﲻ�ú�����~
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

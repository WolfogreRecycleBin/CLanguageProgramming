/*2.3.3��m��n�ģ�m-n+1�����������ĵ���֮��*/
#include<stdio.h>
int main(void)
{
	int m,n,i;
    double sum=0;
	printf("Enter m: ");scanf("%d",&m);
    printf("Enter n: ");scanf("%d",&n);
    if (m>n )return 0;//��ֹ��ѭ��
	for(i=m;i<=n;i++) sum=sum+1/(double)(i);
    printf("sum=%.3f",sum);
	return 0;
}

/*��x��n�η�,���������pow()*/
#include<stdio.h>
int main(void)
{
	int i,n;
	double x,sum=1;
	printf("Enter x: ");scanf("%lf",&x);
    printf("Enter n: ");scanf("%d",&n);
    if (x<=0) return 0;//��ֹnС��0������ѭ��
    for(i=1;i<=n;i++)  sum=sum*x;
	printf("result=%.0f",sum);//��Ŀ�����������ʽ����
	return 0;
}

/*4.1��һ����������Сֵ*/
#include<stdio.h>
int main(void)
{
	int n,i,min,num;
	printf("Input n: ");scanf("%d",&n);
	printf("Input numbers: ");
	scanf("%d",&min);//��������֮���ÿո񣬶���ʱȴ���Զ�����Щ�ո�Ϊ�ָ�����㲻��~
	i=1;
	while (i<n)
	{
		scanf("%d",&num);
		if (num<min) min=num;
		i++;
	}
	printf("min=%d",min);
	return 0;
}

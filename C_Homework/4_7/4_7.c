/*4.7����һ�������������ĸ�λ����֮�ͼ�λ��*/
#include<stdio.h>
int main(void)
{
	int num,count=0,sum=0;
	printf("Input an integer: ");scanf("%d",&num);
	if(num<0) num=-num;
	while(num!=0)
	{
		count++;
		sum=sum+num%10;
		num=num/10;
	}
	printf("count=%d, sum=%d",count,sum);
	return 0;
}

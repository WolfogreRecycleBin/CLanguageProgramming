/*���㲢�����;ʱ��*/
#include<stdio.h>
int main(void)
{
	int time1,time2,hours,minutes,temp;
	printf("Enter time1:");scanf("%d",&time1);
	printf("Enter time2:");scanf("%d",&time2);
	//������ж���������壬��Ϊ�����������󣬳��ֳ���ʱ�����ڵ���ʱ���������ʵ������������ʱ������time1��time2��ֵ
	if (time1>time2)
	{
		temp=time1;
		time1=time2;
		time2=temp;
	}
	hours=time2/100-time1/100;
	minutes=time2%100-time1%100;
    if (minutes<0)
	{
		minutes=minutes+60;
		hours--;//x--�����x++;
	}
	printf("The train journey time is %d hours %d minutes",hours,minutes);
	return 0;
}

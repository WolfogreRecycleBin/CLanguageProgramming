/*计算并输出旅途时间*/
#include<stdio.h>
int main(void)
{
	int time1,time2,hours,minutes,temp;
	printf("Enter time1:");scanf("%d",&time1);
	printf("Enter time2:");scanf("%d",&time2);
	//下面的判断语句无意义，因为测试数据有误，出现出发时间晚于到达时间的情况，故当这种情况出现时，交换time1、time2的值
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
		hours--;//x--类比于x++;
	}
	printf("The train journey time is %d hours %d minutes",hours,minutes);
	return 0;
}

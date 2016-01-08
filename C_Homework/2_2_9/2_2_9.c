/*2.2.9计算三个整数的平均值*/
#include<stdio.h>
int main(viod)
{
	int a,b,c;
	double ave;
	printf("Input 3 integers: ");
	scanf("%d%d%d",&a,&b,&c);//如果写成"%d","%d","%d"，会发生严重错误，原因不明
	ave=(a+b+c)/(3.0);
	//printf("%d %d %d",a,b,c);//测试用
	printf("average=%.2f",ave);//如果写成&ave，输出的值不对，其意义不明
	return 0;
	}
	
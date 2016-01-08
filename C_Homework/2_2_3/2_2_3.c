/*2.2.3求存款到期利息*/
#include<stdio.h>
#include<math.h>
int main(viod)
{
	int year;
	double money,rate,interest;
	printf("Enter money, year and rate: ");
	scanf("%lf%d%lf",&money,&year,&rate );//若错写成%if，可以运行，interest结果不对，原因不明
	interest=money*pow((1+rate),year)-money;
	printf("interest=%.2lf",interest);
	return 0;
}


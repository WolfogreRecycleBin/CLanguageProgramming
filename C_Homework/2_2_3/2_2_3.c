/*2.2.3�������Ϣ*/
#include<stdio.h>
#include<math.h>
int main(viod)
{
	int year;
	double money,rate,interest;
	printf("Enter money, year and rate: ");
	scanf("%lf%d%lf",&money,&year,&rate );//����д��%if���������У�interest������ԣ�ԭ����
	interest=money*pow((1+rate),year)-money;
	printf("interest=%.2lf",interest);
	return 0;
}


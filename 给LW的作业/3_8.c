/* 计算个人所得税*/
#include<stdio.h>
int main(void)
{
	float rate;
	double salary,tax;
	printf("Enter the salary: ");scanf("%lf",&salary);
	if (salary<=850) rate=0;
	if (salary>850 && salary<=1350) rate=0.05;
	if (salary>1350 && salary<=2850) rate=0.1;
	if (salary>2850 && salary<=5850) rate=0.15;
	if (salary>5850) rate=0.2;	
	tax=(salary-850)*rate;
	printf("tax=%.2f",tax);
	return 0;
}

/* 判断某一年是否为闰年*/
#include<stdio.h>
int main(void)
{
	int year;
	printf("Input a year: ");scanf("%d",&year);
	if (year%400==0) 
	{
		printf("%d is a leap year.",year);
		return 0;
	}
	if (year%4==0&&year%100!=0) 
	{
		printf("%d is a leap year.",year);
		return 0;
	}
	printf("%d is not a leap year.",year);
	return 0;
}

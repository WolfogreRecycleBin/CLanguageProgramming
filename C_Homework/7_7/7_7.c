/*7.7输出某日期为该年的第几天*/
#include<stdio.h>
int main(void)
{
	int year,month,day,numberday=0,i;
    int days_of_month(int year, int month);
	printf("Input year, month, day: ");scanf("%d%d%d",&year,&month,&day);
	for(i=1;i<month;i++)
	{
		numberday+=days_of_month(year,i);
	}
	numberday+=day;
	printf("Days of year: %d",numberday);
	return 0;
}

/*返回第year年的第month月有多少天，出错返回0*/
int days_of_month(int year, int month)
{
	int if_leapyear(int t);
	switch(month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
			return 31;
		case 4: case 6: case 9: case 11: 
			return 30;
		case 2:
		{
			if (if_leapyear(year)) return 29;
			else return 28;
		}
	}
	return 0;
}

/*判断第t年是(1)否(0)是闰年*/
int if_leapyear(int t)
{
	if (t%400==0) return 1;
	if (t%4==0&&t%100!=0) return 1;
	return 0;
}

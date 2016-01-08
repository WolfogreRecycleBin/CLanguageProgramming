/*5.3求一个整数中2的个数*/
#include<stdio.h>
int main(void)
{
	int count,num;
	int countdight(int number,int dight);
	printf("Enter an integer: ");scanf("%d",&num);
	count=countdight(num,2);
	printf("Number of digit 2: %d",count);
	return 0;
}

/*返回整数number中数字digit的个数*/
int countdight(int number,int dight)
{
	int num,count=0;
	while(number>0)
	{
		num=number%10;
		if(num==dight) count++;
		number=number/10;
	}
	return count;
}

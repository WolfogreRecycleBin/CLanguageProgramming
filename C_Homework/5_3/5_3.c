/*5.3��һ��������2�ĸ���*/
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

/*��������number������digit�ĸ���*/
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

/*5.1��һ����������������*/
#include<stdio.h>
int main(void)
{
	int sum=0,num;
	int even(int t);
	printf("Input integers: ");
	scanf("%d",&num);
	while(num>0)
	{
		if (even(num)==0) sum=sum+num;
		scanf("%d",&num);
	}
	printf("The sum of the odd numbers is %d",sum);
	return 0;
}

/*�ж�t�ǣ�1����0��Ϊ����*/
int even(int t)
{
	if(t%2==0) return 1;
	else return 0;
}










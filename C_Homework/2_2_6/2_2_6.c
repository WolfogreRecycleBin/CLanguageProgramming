/*2.2.6求两个整数的和、差、积、商与余数*/
#include<stdio.h>
int main(viod)
{
	int num1,num2;
	printf("Enter num1: ");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d",&num2);
	printf("%d+%d=%d\n",num1,num2,num1+num2);
    printf("%d-%d=%d\n",num1,num2,num1-num2);
	printf("%d*%d=%d\n",num1,num2,num1*num2);
	float shang,temp;
	temp=num1*1.0;
	shang=temp/num2;
	printf("%.0f/%d=%.2f\n",temp,num2,shang);
	printf("%d%%%d=%d\n",num1,num2,num1%num2);//使用两个%，结果为输出一个%
	return 0;
}




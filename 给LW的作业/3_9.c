/*统计等级分个数*/
#include<stdio.h>
int main(void)
{
	int A=0,B=0,C=0,D=0,E=0,i,n,grade;
	printf("Enter n:");scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter grade %d:",i);scanf("%d",&grade);
		if (grade>=90 &&grade<=100) A++;
		if (grade>=80 &&grade<=89) B++;
		if (grade>=70 &&grade<=79) C++;
		if (grade>=60 &&grade<=69) D++;
		if (grade>=0 &&grade<=59) E++;
	}
	printf("The number of A(90~100):%d",A);
	printf("\nThe number of B(80~89):%d",B);
	printf("\nThe number of C(70~79):%d",C);
	printf("\nThe number of D(60~69):%d",D);
	printf("\nThe number of E(0~59):%d",E);
	return 0;
}

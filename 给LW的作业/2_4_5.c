/*计算还款年限-月还款额*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int month,year;
	double loan,rate,money;
	printf("Enter loan: ");scanf("%lf",&loan);
	printf("Enter rate: ");scanf("%lf",&rate);
	for(year=5;year<=30;year++)
	{
		month=12*year;
		money=loan*rate*pow((1+rate),month)/(pow((1+rate),month)-1);
		printf("money(%.0f,%d)=%.0f\n",loan,year,money);
	}

	return 0;
	
}

/*2.2.4求分段函数的值*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	double x,y;
	printf("Enter x: ");scanf("%lf",&x);
	if(x<0) y=pow((x+1),2)+2*x+1/x; else y=sqrt(x);
	printf("f(%.2f)=%.2f",x,y);
	return 0;
}

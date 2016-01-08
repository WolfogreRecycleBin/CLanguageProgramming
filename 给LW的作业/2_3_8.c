/*求x的n次方,不允许调用pow()*/
#include<stdio.h>
int main(void)
{
	int i,n;
	double x,sum=1;
	printf("Enter x: ");scanf("%lf",&x);
    printf("Enter n: ");scanf("%d",&n);
    if (x<=0) return 0;//防止n小于0引起死循环
    for(i=1;i<=n;i++)  sum=sum*x;
	printf("result=%.0f",sum);//题目所给的输出样式有误
	return 0;
}

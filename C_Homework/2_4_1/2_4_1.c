/*2.4.1��3��0����~3��n���ݵ�ֵ*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i;
	printf("Enter n: ");scanf("%d",&n);
    for(i=0;i<=n;i++) printf("pow(3,%d)=%.0f\n",i,pow(3,i));
	return 0;
}

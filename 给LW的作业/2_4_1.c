/*求3的0次幂~3的n次幂的值*/
#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i;
	printf("Enter n: ");scanf("%d",&n);
    for(i=0;i<=n;i++) printf("pow(3,%d)=%.0f\n",i,pow(3,i));
	return 0;
}

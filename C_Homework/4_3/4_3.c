/*4.3自由落体运动——求第n次反弹落地经过的路程与第n次反弹高度*/
#include<stdio.h>
int main(void)
{
    int n,i;
	double height,distance=0;
	printf("Input height: ");scanf("%lf",&height);
	printf("Input n: ");scanf("%d",&n);
	distance=0;
	i=1;
	while(i<=n)
	{
		distance=distance+1.5*height;
		height=height/2;
		i++;
	}//每次小球处在最高点的状态
	distance=distance+height;//小球最后一次落地的状态
	printf("distance=%.1f\n",distance);
	printf("height=%.1f",height);
	return 0;
}


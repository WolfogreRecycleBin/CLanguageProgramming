/*4.3���������˶��������n�η�����ؾ�����·�����n�η����߶�*/
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
	}//ÿ��С������ߵ��״̬
	distance=distance+height;//С�����һ����ص�״̬
	printf("distance=%.1f\n",distance);
	printf("height=%.1f",height);
	return 0;
}


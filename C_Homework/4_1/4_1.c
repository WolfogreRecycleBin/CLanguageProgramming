/*4.1求一批整数的最小值*/
#include<stdio.h>
int main(void)
{
	int n,i,min,num;
	printf("Input n: ");scanf("%d",&n);
	printf("Input numbers: ");
	scanf("%d",&min);//输入数据之间用空格，读入时却能自动以这些空格为分割符，搞不懂~
	i=1;
	while (i<n)
	{
		scanf("%d",&num);
		if (num<min) min=num;
		i++;
	}
	printf("min=%d",min);
	return 0;
}

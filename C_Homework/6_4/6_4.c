/*6.4将一笔钱换算成1分、2分和5分的硬币组合*/
#include<stdio.h>
int main(void)
{
	int money,fen1,fen2,fen5,count=0;
	printf("Input money: ");scanf("%d",&money);
	for(fen5=1;fen5<=money/5;fen5++)
		for(fen2=money/2;fen2>=1;fen2--)
			for(fen1=money;fen1>=1;fen1--)
			{
				if (fen1+fen2*2+fen5*5==money)
				{
					printf("fen5: %d fen2: %d fen1: %d\n",fen5,fen2,fen1);
					count++;
				}
				
			}
	printf("count=%d",count);
	return 0;
}

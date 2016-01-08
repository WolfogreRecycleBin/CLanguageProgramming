/*虫子吃苹果*/
#include<stdio.h>
int main(viod)
{
	int apple1,apple2,hour,i;
	float apple,speed;
    scanf("%d %f %d",&apple1,&speed,&hour);
	apple=(float)(apple1);
	speed=1.0/speed;//由speed小时吃掉一个苹果转换为一小时吃掉speed个苹果
	for(i=1;i<=hour;i++) apple=apple-speed;
	apple2=0;
	for(i=1;i<=(apple1);i++)
	{
		if ((float)(i)>=apple) 
		{
			apple2=i-1;
		    break;
		}
	}
	printf("%d",apple2);	
	return 0;
}

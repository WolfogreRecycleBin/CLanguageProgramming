/*���ӳ�ƻ��*/
#include<stdio.h>
int main(viod)
{
	int apple1,apple2,hour,i;
	float apple,speed;
    scanf("%d %f %d",&apple1,&speed,&hour);
	apple=(float)(apple1);
	speed=1.0/speed;//��speedСʱ�Ե�һ��ƻ��ת��ΪһСʱ�Ե�speed��ƻ��
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

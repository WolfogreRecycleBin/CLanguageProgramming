/*2.2.9��������������ƽ��ֵ*/
#include<stdio.h>
int main(viod)
{
	int a,b,c;
	double ave;
	printf("Input 3 integers: ");
	scanf("%d%d%d",&a,&b,&c);//���д��"%d","%d","%d"���ᷢ�����ش���ԭ����
	ave=(a+b+c)/(3.0);
	//printf("%d %d %d",a,b,c);//������
	printf("average=%.2f",ave);//���д��&ave�������ֵ���ԣ������岻��
	return 0;
	}
	
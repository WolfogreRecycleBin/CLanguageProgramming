/*4.2��a +aa +aaa +aa��a(n ��a) ֮��*/
#include<stdio.h>
int main(void)
{
	int a,n,s=0,i,num=0;
	printf("Input a, n: ");scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++)
	{
		num=num+a;
		a=a*10;
		s=s+num;
	}
	printf("s=%d",s);
	return 0;
}
//������֮ǰ���һ��������ͬ����ȷ���㷨���Ǻܺá�
/*int main(void)
{
	int s,n,a,i,j,temp,power;
	printf("Input a, n: ");scanf("%d %d",&a,&n);
	s=0;
	for(i=n;i>=1;i--)
	{
		temp=a*i;
		power=1;
		j=1;
		while(j<=(n-i))//��forѭ������������Ϊ��������for����ִ������һ��ѭ��
		{
			power=power*10;
			j++;
		}//�ö�power��ѭ�����������pow(10,n-i)
		s=s+temp*power;
	}
	printf("s=%d",s);
	
	return 0;
}
//���ƭ����˵����pow����򵥣������ã�*/

/*ͳ���ַ�����*/
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int i,letter=0, blank=0, digit=0, other=0;
	char ch;
	bool flag;
	printf("Input 10 characters: ");
	for (i=1;i<=10;i++)
	{
		ch=getchar();
		/*��������ķ���Ϊ��������ʮ���ַ���������س�����"123%%%aaa?/n"��
		����������У������ζ���123***aaa?��/n��Ϊ��11���ַ���û�б����룬
		����������ڵ�11�ζ��룬/n��Ϊ��11���ַ������롣�������"123%%%/n"��
		����������/n�������У�������7���ַ���/n��Ϊ��7������������ͣ���ȴ���
		��������ַ�*/
		flag=false;
		if (ch>='0' && ch<='9')  
		//�����ַ���''����������'A'�������""����������"A"���ᱻ��Ϊ���ַ������ͣ�'A'��"A"�����
		{
			digit++;
			flag=true;
		}
		if (ch==' ')  
		{
			blank++;
			flag=true;
		}
		if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))  
		{
			letter++;
			flag=true;
		}
		if (! flag) other++;
	}
	
	printf("letter=%d, blank=%d, digit=%d, other=%d",letter, blank, digit, other);

	return 0;
}

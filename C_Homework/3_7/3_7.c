/*3.7�����������ܳ������*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c;
	double s,area,perimeter;
	printf("Enter 3 sides of the triangle: ");scanf("%d %d %d",&a,&b,&c);	
	if (!(a+b>c && a+c>b &&	b+c>a)) //����Ū���ˣ����øĴ����ˣ�ֱ��ȡ��
	{
		printf("These sides do not correspond to a valid triangle");
	}
	else
	{
		s=(a+b+c)/2.0;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		perimeter=a+b+c;
		printf("area=%.2f; perimeter=%.2f",area,perimeter);
	}
		
	return 0;
}

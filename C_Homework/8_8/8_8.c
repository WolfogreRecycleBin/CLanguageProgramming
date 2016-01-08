/*8.8整数排序*/
#include<stdio.h>
int main(void)
{
	void sort(int *p, int lenth, int flag);
	int n, i, num[10],flag;
	char choice;
	printf("Input n: "); scanf("%d", &n);
	printf("Input %d integers: ", n);
	for (i = 0; i < n; i++) scanf("%d", &num[i]);
	getchar();//消除此前输入数据时结束符的影响
	printf("Input A or D: "); choice = getchar();
	if (choice == 'A') flag = 1;
	if (choice == 'D') flag = 0;
	sort(num, n, flag);
	printf("After sorted: ");
	for (i = 0; i < n; i++) printf("%d ", num[i]);
	return 0;
}

/*处理：给指针p指向的长度为lenth的整数数组排序，若flag为真从小到大排，否则从大往小排*/
void sort(int *p, int lenth, int flag)
{
	int *i, *j;
	if (flag)
	{
		for (i = p + lenth - 1; i >= p; i--)
			for (j = p; j < i; j++)
			{
			if (*j>*(j+1)) 
			{
				int t;
				t = *j;
				*j = *(j + 1);
				*(j + 1) = t;
			}
			}
	}
	else
	{
		for (i = p + lenth - 1; i >= p; i--)
			for (j = p; j < i; j++)
			{
			if (*j<*(j + 1))
			{
				int t;
				t = *j;
				*j = *(j + 1);
				*(j + 1) = t;
			}
			}
	}
}

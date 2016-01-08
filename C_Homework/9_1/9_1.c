/*9.1求复数之积*/
#include<stdio.h>
//定义复数结构
struct complex
{
	int real;
	int imaginary;
};
int main(void)
{
	struct complex multiply(struct complex a, struct complex b);
	void printcomplex(struct complex t);
	struct complex a, b, c;
	printf("Input a1, a2, b1, b2: ");
	scanf("%d%d%d%d", &a.real, &a.imaginary, &b.real, &b.imaginary);
	c = multiply(a, b);
	printf("("); printcomplex(a); printf(")*");
	printf("("); printcomplex(b); printf(")=");
	printcomplex(c);
	return 0;
}

/*返回复数a和复数b的乘积*/
struct complex multiply(struct complex a, struct complex b)
{
	struct complex result;
	result.real = a.real*b.real - a.imaginary*b.imaginary;
	result.imaginary = a.real*b.imaginary + b.real*a.imaginary;
	return result;
}

/*处理:打印复数t*/
void printcomplex(struct complex t)
{
	printf("%d", t.real);
	if (t.imaginary < 0) printf("%di", t.imaginary);
	else printf("+%di", t.imaginary);
}
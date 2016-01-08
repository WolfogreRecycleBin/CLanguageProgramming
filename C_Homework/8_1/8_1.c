/*8.1指针变量作为函数参数，求两个整型数的和与差*/
#include<stdio.h>
void fun(int x,int y,int *pa,int *pb) ;
int main( void) 
{ 
    int a,b,add=0,sub=0;
    printf("Input a and b: ");
    scanf("%d%d",&a,&b); 
    fun(a,b,&add,&sub);
    printf("%d+%d=%d\n",a,b,add);
    printf("%d-%d=%d\n",a,b,sub);
    return 0; 
}

/*处理：将x+y赋予*pa，将a-b赋予*pb*/
void fun(int x,int y,int *pa,int *pb)
{
	*pa=x+y;
	*pb=x-y;
}

/*8.1ָ�������Ϊ�����������������������ĺ����*/
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

/*������x+y����*pa����a-b����*pb*/
void fun(int x,int y,int *pa,int *pb)
{
	*pa=x+y;
	*pb=x-y;
}

/*计算等级分*/
#include<stdio.h>
int main(void)
{
	char level;
	printf("Input Grade: ");scanf("%c",&level);
	switch(level)
	{
		case 'A':printf("A is 90-100");break;
        case 'B':printf("B is 80-89");break;
	    case 'C':printf("C is 70-79");break;
		case 'D':printf("D is 60-69");break;
		case 'E':printf("E is 0-59");break;
		default:printf("error");break;
	}
	
	return 0;
}

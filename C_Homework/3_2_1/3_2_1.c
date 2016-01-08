/*3.2.1求某月的天数*/
#include<stdio.h>
int main(viod)
{
	int month;
	printf("Input a month: ");scanf("%d",&month);
	switch(month)
	{
		case 1 :
		case 3 :
		case 5 :
	    case 7 :
		case 8 :
		case 10 :
		case 12:
			printf("month %d has 31 days",month);break;
		case 2 :
			printf("month %d has 28 days",month);break;
		case 4 :
	    case 6 :
		case 9 :	
		case 11 :
			printf("month %d has 30 days",month);break;
		default :
			printf("wrong month");
	}
	return 0;
}


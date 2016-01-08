/*ÇóÂú×ãabcd=(ab+cd)2µÄÊı*/
#include<stdio.h>
int main(viod)
{
	int abcd,ab,cd;
	for(abcd=1000;abcd<=9999;abcd++)
	{
		ab=abcd/100;
		cd=abcd%100;
		if (abcd==(ab+cd)*(ab+cd)) printf("%6d",abcd);
	}
	
	return 0;
}

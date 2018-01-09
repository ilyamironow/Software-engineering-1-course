#include <stdio.h>
void main()
{
	int x = 1, sum1, sum2, dif;
	while (x != 1001)
	{
		sum1 += x * x;		
		x++;
	}
	x = 1;	
	while (x != 1001)
	{
		sum2 += x;		
		x++;
	}
	sum2 *= sum2;
	dif = sum2 - sum1;
	if (dif < 0)
	{
		dif *= (-1);
	}
	printf("%d", dif);
}

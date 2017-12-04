#include <stdio.h>

int r()
{
	int x, y, sum;
	scanf("%x %x", &x, &y);
	sum = x + y;
	sum = sum >> 31;
	x = x >> 31;
	y = y >> 31;
	return ((sum ^ x) ^ (sum ^ y)) & 1;
}
void main()
{
	printf("%x\n", r());
}

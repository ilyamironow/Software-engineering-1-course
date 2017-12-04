#include <stdio.h>

int r()
{
	int x;
	scanf("%d", &x);
	return ~ (x || x) & 1;
}
void main()
{
	printf("%x\n", r());
}

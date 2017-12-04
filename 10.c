#include <stdio.h>

int r()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	return ! ! x * y + ! x * z;
}
void main()
{
	printf("%d\n", r());
}

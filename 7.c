#include <stdio.h>

int r() {
	int x, n, a = -1;
	scanf("%x %x", &x, &n);
	return (x >> n) ^ (a << (32 - n));
}
void main()
{
	printf("%x", r());
}

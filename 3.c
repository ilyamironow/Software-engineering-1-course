#include <stdio.h>
void main() {
	int x = 73, a;
	a = x << 9;
	x = x + a;
	x = (x << 18) + x;
	printf("%d\n", x >> 1);
}


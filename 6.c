#include <stdio.h>

int r() {
	int x, n;
	scanf("%x %x", &x, &n);
	return (x >> (8 * n)) & 0xFF;
}
void main() {
	printf("%x\n", r());
}

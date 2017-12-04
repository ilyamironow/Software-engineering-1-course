#include <stdio.h>

char r() {
	int x, a;
	scanf("%d", &x);
	a = (x >> 31) & 1;
	return x | a;
}
void main() {
	printf("%d\n", r());
}

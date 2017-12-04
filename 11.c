#include <stdio.h>

int r() {
	int x;
	scanf("%d", &x);
	return ! (x & (~ x + 1) ^ x) + ! x * (~ 0);
}
void main() {
	printf("%d\n", r());
}

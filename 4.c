#include <stdio.h>
int f() {
	int x, n;
	scanf("%d %d", &x, &n);
	x = ~ x + 1;
	x = x >> n;
	return ! x;
}
void main() {
	printf("%d\n", f());
}

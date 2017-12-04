#include <stdio.h>
void main(int x, int y) {	
	scanf("%d %d", &x, &y);
	x = ~ (x & y) & ~ (~ x & ~ y);
	printf("%d", x);
}


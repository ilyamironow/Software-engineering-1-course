#include <stdio.h> 
int bitAnd(int x, int y) {
	x = ~ x;
	y = ~ y;
 	x = ~ (x | y);
	return x;
}
int bitXor(int x, int y) {
	x = ~ (x & y) & ~ (~ x & ~ y);
	return x;
}
int thirdBits(void) {
	int x = 73, a;
	a = x << 9;
	x = x + a;
	x = (x << 18) + x;
	return x >> 1;
}
int fitsBits(int x, int n) {
	n = 32 + (~ n + 1);
	n = (x << n) >> n;
	return ! (x ^ n);
}
int sign(int x) {
	return (x >> 31) | ! (! x);
}
int getByte(int x, int n) {
	return (x >> (8 * n)) & 0xFF;
}
int logicalShift(int x, int n)
{
    return (x >> n) & ~(((1 << 31) >> n) << 1);
}
int addOK(int x, int y) {
	int sum;
	sum = x + y;
	sum = sum >> 31;
	x = x >> 31;
	y = y >> 31;
	return !((sum ^ x) & (sum ^ y));
}
int bang(int x) {
	return ~ (x || x) & 1;
}
int conditional(int x, int y, int z) {
	return ! ! x * y + ! x * z;
}
int isPower2(int x) {
	return !(x & (1 << 31)) & !!x & !(x ^ (x & (~x + 1)));
}
void main() {
	int x, y, z, n;

	printf("bitAnd: x(%%d) and y(%%d)\n");
	scanf("%d %d", &x, &y);
	printf("%d\n", bitAnd(x, y));

	printf("bitXor: x(%%d) and y(%%d)\n");
	scanf("%d %d", &x, &y);
	printf("%d\n", bitXor(x, y));

	printf("thirdBits:\n");
	printf("%d\n", thirdBits());

	printf("fitsBits: x(%%d) and n(%%d)\n");
	scanf("%d %d", &x, &n);
	printf("%d\n", fitsBits(x, n));

	printf("sign: x(%%d)\n");
	scanf("%d", &x);
	printf("%d\n", sign(x));

	printf("getByte: x(%%x) and n(%%x)\n");
	scanf("%x %x", &x, &n);
	printf("%x\n", getByte(x, n));

	printf("logicalShift: x(%%x) and n(%%d)\n");
	scanf("%x %d", &x, &n);
	printf("%x\n", logicalShift(x, n));

	printf("addOK: x(%%x) and y(%%x)\n");
	scanf("%x %x", &x, &y);
	printf("%x\n", addOK(x, y));

	printf("bang: x(%%d)\n");
	scanf("%d", &x);
	printf("%x\n", bang(x));

	printf("conditional: x(%%d) and y(%%d) and z(%%d)\n");
	scanf("%d %d %d", &x, &y, &z);
	printf("%d\n", conditional(x, y, z));

	printf("isPower2: x(%%d)\n");
	scanf("%d", &x);
	printf("%d\n", isPower2(x));
}



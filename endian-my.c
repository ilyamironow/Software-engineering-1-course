#include <stdio.h>

union data {
	int i;
	char c[sizeof(int)];
} 
data;

void main() {
	data.i = 1;
	printf("Number : %d\n", data.i);
	printf("Memory representation : %d %d %d %d\n", data.c[0], data.c[1], data.c[2], data.c[3]);
	if (data.c[0] == 1)
		printf("little-endian\n");
	else
		printf("big-endian\n");
}

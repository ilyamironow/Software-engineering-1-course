#include <stdio.h>
#define N 100
void main() 
{
	char m[N];
	gets(m);
	int i = 0;
	for (i = 0; m[i] != '\0'; i++);
	printf("%d", i);
}

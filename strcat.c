#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
void main() 
{
	char m1[N], m2[N];
	gets(m1);
	gets(m2);
	int i = 0, k;
	k = strlen(m1);
	for(i = k; m2[i-k] != '\0'; i++)
		m1[i] = m2[i - k];
	m1[i] = '\0'; 
	printf("%s\n", m1);
}

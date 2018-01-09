#include <stdio.h>
#include <string.h>
#define N 100

void main()
{
	char stroka[N], nstroka[N], i, s, a, j = 0, p = 0;
	while ((stroka[p] = getchar()) != '\n') {
		p++;
	}
	stroka[p] = '\0';
	scanf("%s", &a);
	for (i = 0; i < p; i++) {
		s = stroka[i];
		if (s != a) {
			nstroka[j] = s;
			j++;
		}
	}
	nstroka[j] = '\0';
	printf("%s\n", nstroka);
}


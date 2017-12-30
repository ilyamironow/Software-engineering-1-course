#include <stdio.h>
#include <string.h>

void main()
{
	char stroka[100], nstroka[100], i, s, a, j = 0, p = 0;
	while ((stroka[p] = getchar()) != '\n') {
		p++;
	}
	stroka[p] = '\0';
	scanf("%s", &a);
	for (i = 0; i < strlen(stroka); i++) {
		s = stroka[i];
		if (s != a) {
			nstroka[j] = s;
			j++;
		}
	}
	nstroka[j] = '\0';
	printf("%s\n", nstroka);
}


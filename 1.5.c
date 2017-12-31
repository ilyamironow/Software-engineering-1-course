#include <stdio.h>
#include <stdlib.h>
#define N 100 

void main()	{
	int x, l = 1234, i = 0;
	char c, nstr[N];
	FILE *f = fopen("file1.txt", "r");
	c = fgetc(f);
	do {
		x = fgetc(f);
		if ((x != c) && (l == 0)) {
			break;
		}
		if (x == '\n') {
			l = 0;
		}
		else {
			l++;
		}
	}
	while (x != EOF);
	do {		
		nstr[i] = x;
		i++;
		x = fgetc(f);
	}
	while (x != EOF);
	nstr[i] = '\0';
	fclose(f);
	printf("%s", nstr);
}

#include <stdio.h>
#include <stdlib.h>
#define N 100 

void main()	{
	int x, l, i = 0, y;
	char nstr[N];
	FILE *f = fopen("file1.txt", "r");
	if (f == 0)
	{
		printf("can't open file\n");
		return ;
	}
	do {
		x = fgetc(f);
		if ((x == '/') && (l == 0)) {
			nstr[i] = '/';
			y = x;
			nstr[i+1] = '/';
			i += 2;
			do {
				y = fgetc(f);
				nstr[i] = y;
				i++;
			}
			while (y != '\n');
			l = 1;
		}
		if (x == '/') {
			l = 0;
		}
	}
	while (feof(f) == 0);
	nstr[i] = '\0';
	fclose(f);
	printf("%s", nstr);
}

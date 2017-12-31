#include <stdio.h>
#define N 3
void main()
{
	char mas1[N], mas2[N];
	char i, j, c = 0;
	for (i = 0; i < N; i++)
	{
		mas1[i] = 0;
		mas2[i] = 0;
	}
	scanf("%s", mas1);
	scanf("%s", mas2);
	for (i = 0; i < N; i++) 
	{
		if (mas1[i] > mas2[i])
		{
			c = 1;
			break;
		}
		else if (mas2[i] > mas1[i])
		{
			c = 2;
			break;
		}
	}
	if (c == 1) 
	{
		for (i = 0; i < N; i++) 
		{
			printf("%c", mas1[i]);
		}
	}
	if (c == 2) 
	{
		for (i = 0; i < N; i++) 
		{
			printf("%c", mas2[i]);
		}
	}
	if (c == 0) 
	{
		printf("Numbers are equal");
	}
	printf("\n");
}


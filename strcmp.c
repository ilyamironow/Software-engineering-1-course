#include <stdio.h>
#define N 100
void main() 
{
	char m1[N], m2[N];
	gets(m1);
	gets(m2);
	int i;
	for(i = 0; ; i++)
		if (m1[i] != m2[i])
			{
				m1[i] -= m2[i];
				break;
			}
		else if (m1[i] == m2[i] && m1[i] == '\0')
			{
				m1[i] = 0;
				break;
			}
	printf("%d\n", m1[i]);
}

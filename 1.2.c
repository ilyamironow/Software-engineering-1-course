#include <stdio.h>
#define N 5
void main()
{
	int mas1[N],mas2[N];
	char i,j,c=0;
	for(i=0;i<N;i++)
	scanf("%d",&mas1[i]);
	for(i=0;i<N;i++)
	scanf("%d",&mas2[i]);
	for(i=0;i<N;i++)
		{
			if (mas1[i] > mas2[i])
				{
					c=1;
					break;
				}
			else if (mas2[i] > mas1[i])
				{
					c=2;
					break;
				}
		}
	if (c==1)
		for(i=0;i<N;i++)
			printf("%d",mas1[i]);
	if (c==2)
		for(i=0;i<N;i++)
			printf("%d",mas2[i]);
	if (c==0)
		printf("Numbers are equal");
	printf("\n");
}


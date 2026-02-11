#include <stdio.h>
#include <math.h>
void main()
{
	int N, d, i, j;

	printf("Unesite vrednost N: ");
	scanf("%d", &N);

	d = 0;

	for (i = 0; i < N; i++)
	{
		for (j = 2; j < sqrt(i); j++)
			if (i % j == 0)
				d++;
	}
	if (d > 0)
		printf("%d ", i);
}

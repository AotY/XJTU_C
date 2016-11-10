#include <stdio.h>
int main()
{
	int F[1000], n = 0, m = 0, a = 1;
	F[0] = 0;
	F[1] = 1;
	scanf("%d", &n);
	if (n > 1)
	{
		for (m = 2; m <= n; m++)
		{
			F[m] = F[m - 1] + F[m - 2];
			a = a + F[m];
		}
		printf("%d %d", F[m - 1], a);
	}
	else
	{
		if (n == 0)
			printf("0 0");
		else
			printf("1 1");
	}
	return 0;
}
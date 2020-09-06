#include <stdio.h>

int main()
{
	int n, p, v, t, count = 0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d %d", &p, &v, &t);
		if (p + v + t > 1)
			count++;
	}
	printf("%d\n", count);
}

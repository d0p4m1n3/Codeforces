#include <stdio.h>
#include <string.h>

int main()
{
	char w[100];
	int n;
	scanf("%d\n", &n);
	while (n--)
	{
		gets(w);
		int s = strlen(w);
		if (s > 10)
			printf("%c%d%c\n", w[0], s - 2, w[s - 1]);
		else puts(w);
	}
	return 0;
}

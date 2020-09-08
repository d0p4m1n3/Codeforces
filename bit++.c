#include <stdio.h>

int main()
{
	int n, i, ans = 0;
	char a[4];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", &a);
		if (a[1] == '+')
		{
			ans++;
		}
		else
		{
			ans--;
		}
	}	
	printf("%d\n", ans);
}

#include <stdio.h>
#include <strings.h>

int main()
{
	char a[100], b[100];
	int x;
	scanf("%s %s", &a, &b);
	x = strcasecmp(a, b);
	if (x == 0)
		printf("0\n");
	else if (x < 0)
		printf("-1\n");
	else
		printf("1\n");
	
	return 0;
}

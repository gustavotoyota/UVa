/*---------------------------------------*\
 | Gustavo Toyota - 29/03/2016           |
 | URI 1743 - Automated Checking Machine |
\*---------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[5], b[5];

	scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	scanf("%d%d%d%d%d", &b[0], &b[1], &b[2], &b[3], &b[4]);

	int result = a[0] != b[0] && a[1] != b[1] && a[2] != b[2] && a[3] != b[3] && a[4] != b[4] ? 'Y' : 'N';

	putchar(result);
	putchar('\n');

	return 0;
}
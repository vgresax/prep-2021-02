#include <stdio.h>

void printing(int n) {
	printf("%d", n);
	n--;
	printing(n);
}
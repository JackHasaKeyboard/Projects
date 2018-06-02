#include <stdio.h>
#include <math.h>

int main() {
	printf("a: ");
	int a;
	scanf("%d", &a);

	printf("b: ");
	int b;
	scanf("%d", &b);

	printf("%f", pow(a, b));

	return 0;
}

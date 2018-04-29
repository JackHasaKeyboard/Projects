#include <stdio.h>
#include <stdbool.h>

int main() {
	int div = false;

	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			div = true;

			printf("Fizz");
		}

		if (i % 5 == 0) {
			div = true;

			printf("Buzz");
		}

		if (!div) {
			printf("%d", i);
		}

		printf("\n");
	}
}

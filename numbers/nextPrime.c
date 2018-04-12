#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("Number: ");
	int roof;
	scanf("%d", &roof);

	for (int i = 2; i < roof; i++) {
		bool prime = true;

		for (int f = 2; f <= i / 2; f++) {
			if (i % f == 0) {
				prime = false;
			}
		}

		if (prime) {
			printf("%d is a prime number\n", i);
		}
	}

	return 0;
}

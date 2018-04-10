#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("Number: ");
	int no;
	scanf("%d", &no);

	for (int i = 2; i <= no / 2; i++) {
		if (no % i == 0) {
			bool prime = true;

			for (int f = 2; f <= i / 2; f++) {
				if (i % f == 0) {
					prime = false;
				}
			}

			if (prime) {
				printf("%d is a prime factor\n", i);
			}
		}
	}

	return 0;
}

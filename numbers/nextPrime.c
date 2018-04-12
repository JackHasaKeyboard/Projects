#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
	int i = 2;

	bool another = true;
	while (another) {
		printf("Another one? (y/n): ");
		char conf;
		scanf(" %c", &conf);

		if (conf != 'y') {
			another = false;
		}


		bool prime = false;
		while (!prime) {
			prime = true;

			for (int f = 2; f <= i / 2; f++) {
				if (i % f == 0) {
					prime = false;
				}
			}

			if (prime) {
				printf("%d is a prime number\n", i);
			}

			i++;
		}
	}

	return 0;
}

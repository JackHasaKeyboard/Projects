#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("Roof: ");
	int roof;
	scanf("%d", &roof);

	int mod[3] = {3, 5, 7};

	for (int i = 2; i < roof; i++) {
		bool prime = true;

		if (i % 2 == 0 && i != 2) {
			prime = false;
		}

		for (int m = 0; m < 3; m++) {
			if (i % mod[m] == 0 && i != mod[m]) {
				prime = false;
			}
		}

		if (prime) {
			printf("%d\n", i);
		}
	}

	return 0;
}

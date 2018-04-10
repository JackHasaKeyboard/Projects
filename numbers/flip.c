#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	printf("Count: ");
	int count;
	scanf("%d", &count);

	srand(time(NULL)); // necessary. Should only be called once

	int r,
			h = 0,
			t = 0;
	for (int i = 0; i < count; i++) {
		r = rand() % 2;

		r == 0 ? h++ : t++;
	}

	printf("Heads: %d, Tails: %d\n", h, t);

	return 0;
}

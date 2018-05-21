#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int* bubble(int* no) {
	bool sorted = false;

	while (!sorted) {
		sorted = true;

		for (int i = 0; i < 8 - 1; i++) {
			if (no[i] > no[i + 1]) {
				sorted = false;

				int tmp = no[i + 1];

				no[i + 1] = no[i];
				no[i] = tmp;
			}
		}

		for (int i = 0; i < 8; i++) {
			printf("%d ", no[i]);
		}
		printf("\n");
	}

	return no;
}

int main() {
	int no[8];

	srand(time(NULL));

	for (int i = 0; i < 8; i++) {
		no[i] = rand() % 10;
	}

	bubble(no);

	return 0;
}

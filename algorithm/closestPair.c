#include <stdio.h>
#include <time.h>
#include <math.h>

float d(int* point, int* comparison) {
	return sqrt(pow(point[0] - point[1], 2) + pow(comparison[0] - comparison[1], 2));
}

int main() {
	int point[5][2];

	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		point[i / 2][i % 2] = rand() % 20;
	}

	int closest[2][2];
	closest[0][0] = point[0][0];
	closest[0][1] = point[0][1];
	closest[1][0] = point[1][0];
	closest[1][1] = point[1][1];
	for (int i = 0; i < 5; i++) {
		for (int f = 0; f < 5; f++) {
			if (i != f && d(point[i], point[f]) < d(closest[0], closest[1])) {
				closest[0][0] = point[i][0];
				closest[0][1] = point[i][1];
				closest[1][0] = point[f][0];
				closest[1][1] = point[f][1];
			}
		}
	}

	printf("Closest pair: (%d, %d), (%d, %d)", closest[0][0], closest[0][1], closest[1][0], closest[1][1]);

	return 0;
}

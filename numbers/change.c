#include <stdio.h>
#include <math.h>

int main() {
	printf("Cost: ");
	double cost;
	scanf("%lf", &cost);

	printf("Given: ");
	double given;
	scanf("%lf", &given);

	double val[] = {
		.25,
		.10,
		.05,
		.01
	};

	float rem = given - cost;
	for (int v = 0; v < sizeof(val) / sizeof(double); v++) {
		int fac = (rem - fmod(rem, val[v])) / val[v];

		rem = fmod(rem, val[v]);

		printf("%f: %d\n", val[v], fac);
	}

	return 0;
}

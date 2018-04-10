#include <stdio.h>

int main() {
	printf("Cost: ");
	float cost;
	scanf("%f", &cost);

	printf("Tax (%%): ");
	float tax;
	scanf("%f", &tax);

	printf("%.2f", cost + (cost * (tax / 100)));

	return 0;
}

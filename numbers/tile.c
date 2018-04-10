#include <stdio.h>

int main() {
	printf("Price ($): ");
	float price;
	scanf("%f", &price);

	printf("Width (ft): ");
	int width;
	scanf("%d", &width);

	printf("Height (ft): ");
	int height;
	scanf("%d", &height);

	float total = price * (width * height);
	printf("%.2f", total);

	return 0;
}

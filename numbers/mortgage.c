#include <stdio.h>

int main() {
	printf("Loan ($): ");
	float loan;
	scanf("%f", &loan);

	printf("Interest (%%): ");
	float interest;
	scanf("%f", &interest);

	printf("Length (months): ");
	int len;
	scanf("%d", &len);

	float debt = loan + (loan * (interest / 100)),
			monthly = debt / len;

	printf("%.2f", monthly);

	return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
	printf("Credit-card number: ");
	char str[16];
	scanf("%s", str);

	char check[16];
	for (int i = (int) strlen(str) - 1; i >= 0; i--) {
		char no = str[i];

		if (i % 2 == 0) {
			int val = (no - '0') * 2;

			if (val > 9) {
				val -= 9;
			}

			no = val + '0';
		}

		check[i] = no;
	}
	check[16] = '\0';

	int sum = 0;
	for (int i = 0; i < (int) strlen(check); i++) {
		int val = check[i] - '0';
		sum += val;
	}

	if (sum % 10 == 0) {
		printf("Valid\n");
	} else {
		printf("Invalid\n");
	}

	return 0;
}

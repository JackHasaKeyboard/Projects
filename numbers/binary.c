#include <stdio.h>
#include <string.h>

int main() {
	printf("Number (decimal): ");
	int no;
	scanf("%d", &no);

	char bin[64] = "";
	while (no > 0) {
		for (int i = (int) strlen(bin); i > 0; i--) {
			bin[i] = bin[i - 1];
		}

		int bit = no % 2;
		char digit = bit + '0';
		bin[0] = digit;

		no /= 2;
	}

	printf("%s", bin);

	return 0;
}

#include <stdio.h>

int main() {
	printf("Number: ");
	int no;
	scanf("%d", &no);

	int sum = 1;
	for (int i = no; i > 0; i--) {
		sum *= i;
	}

	printf("%d", sum);

	return 0;
}

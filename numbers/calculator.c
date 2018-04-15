#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	printf("Expression: ");
	float no[2];
	char opp;
	scanf("%f %c %f", &no[0], &opp, &no[1]);

	float result;
	switch(opp) {
		case '+':
			result = no[0] + no[1];

			break;

		case '-':
			result = no[0] - no[1];

			break;

		case '*':
			result = no[0] * no[1];

			break;

		case '/':
			result = no[0] / no[1];

			break;
	}

	printf("%f", result);

	return 0;
}

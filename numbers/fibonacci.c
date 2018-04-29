#include <stdio.h>

int main() {
	printf("Number: ");
	int no;
	scanf("%d", &no);

	int t1 = 0,
			t2 = 1;

	while (t1 + t21 < no) {
		t1 += t2;

		printf("%d\n", t1);

		t2 = t1 - t2;
	}

	return 0;
}

#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main() {
	const char* q[10] = {
		"Is Boston a city",
		"Does chewing gum really take 7 years to digest",
		"Do bananas grow on trees",
		"Is Oxford University older than the Aztec Empire",
		"Can emus fly",
		"Is the Atlantic Ocean the biggest ocean on Earth",
		"Does the human body have over 100 bones",
		"Are sharks mammals",
		"Does the Sun comprise over 99\% of our solar system's mass",
		"Do the total amount of humans outweigh the total amount of ants"
	};

	bool a[10] = {
		true,
		false,
		false,
		true,
		false,
		false,
		true,
		false,
		true,
		false
	};

	srand(time(NULL));

	int score = 0;
	for (int i = 0; i < 5; i++) {
		int r = rand() % 10;

		printf("%s? (y/n): ", q[r]);
		char c;
		scanf("%c ", &c);

		bool choice;

		if (c == 'y') {
			choice = true;
		}

		if (c == 'n') {
			choice = false;
		}

		if (choice == a[r]) {
			printf("Right\n");

			score++;
		} else {
			printf("Wrong\n");
		}
	}

	return 0;
}

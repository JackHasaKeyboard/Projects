#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "String: ";
	string sentence;
	getline(cin, sentence);

	int w = 0;
	for (int i = 1; i < sentence.length(); i++) {
		if (i == 1 && !isspace(sentence[0]) || !isspace(sentence[i]) && isspace(sentence[i - 1])) {
			w++;
		}
	}

	cout << w;

	return 0;
}

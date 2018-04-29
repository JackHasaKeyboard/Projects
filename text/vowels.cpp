#include <iostream>
#include <string.h>

using namespace std;

int main() {
	string vowel = "aeiou";

	cout << "String: ";
	string txt;
	cin >> txt;

	int i = 0;
	for (auto c : txt) {
		for (auto v : vowel) {
			if (c == v) {
				i++;
			}
		}
	}

	cout << i << endl;

	return 0;
}

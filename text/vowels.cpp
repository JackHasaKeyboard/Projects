#include <iostream>
#include <string.h>

using namespace std;

int main() {
	string vowel = "aeiou";

	cout << "String: ";
	string str;
	cin >> str;

	int i = 0;
	for (auto c : str) {
		for (auto v : vowel) {
			if (c == v) {
				i++;
			}
		}
	}

	cout << i << endl;

	return 0;
}

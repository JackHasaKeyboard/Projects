#include <iostream>
#include <string>
#include <stdbool.h>

using namespace std;

int main() {
	cout << "String: ";
	string txt;
	cin >> txt;

	bool mirror = true;
	for (int i = 0; i < txt.length() - 1; i++) {
		if (txt[i] != txt[(txt.length() - 1 - i)]) {
			mirror = false;
		}
	}

	cout << mirror;

	return 0;
}

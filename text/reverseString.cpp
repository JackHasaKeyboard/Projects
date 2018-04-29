#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "String: ";
	string txt;
	cin >> txt;

	for (int i = txt.length(); i >= 0; i--) {
		cout << txt[i];
	}

	return 0;
}

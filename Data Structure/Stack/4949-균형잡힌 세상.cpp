#include <iostream>
using namespace std;
int main() {
	string s;
	int count = 0;
	int arr[100];
	getline(cin, s);
	do {
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == '.')
				break;
			if (s[j] == '(') {
				arr[count++] = 1;
			} else if (s[j] == '[') {
				arr[count++] = 2;
			} else if (s[j] == ')') {
				count--;
				if (arr[count] != 1) {
					count = -1;
					break;
				}
			} else if (s[j] == ']') {
				count--;
				if (arr[count] != 2) {
					count = -1;
					break;
				}
			}
		}
		count == 0 ? cout << "yes" << '\n' : cout << "no" << '\n';
		count = 0;
		getline(cin, s);
	} while (s != ".");
	return 0;
}
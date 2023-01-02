#include <iostream>
using namespace std;
int main() {
	int T;
	string s;
	int count = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> s;
		if (s.size() % 2 == 1) {
			cout << "NO" << '\n';
		} else {
			count = 0;
			for (int j = 0; j < s.size(); j++) {
				if (s[j] == '(') {
					count++;
				} else if (s[j] == ')') {
					if (count == 0) {
						cout << "NO" << '\n';
						break;
					} else {
						count--;
					}
				}
				if (j == s.size() - 1 && count == 0) {
					cout << "YES" << '\n';
				} else if (j == s.size() - 1 && count != 0) {
					cout << "NO" << '\n';
					continue;
				}
			}
		}
	}
	return 0;
}
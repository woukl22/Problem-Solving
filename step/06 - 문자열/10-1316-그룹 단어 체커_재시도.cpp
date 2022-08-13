#include <iostream>
using namespace std;

bool groupCheck(string s) {
	for (int i = 0; i < s.length(); i++) {
		for (int j = i + 1; j < s.length(); j++) {
			if (s[i] == s[j] && s[j] != s[j - 1]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int n = 1000;
	while (n > 100) {
		cin >> n;
	}

	string arr[n];
	int num = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (groupCheck(arr[i])) {
			num++;
		}
	}
	cout << num << '\n';

	return 0;
}
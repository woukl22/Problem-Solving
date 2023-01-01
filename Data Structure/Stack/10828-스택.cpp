#include <iostream>
#include <string>
using namespace std;

pair<int, int> p;

int main() {
	int N, p;
	string s;

	cin >> N;
	int a[N];
	int count = 0;
	for (int i = 0; i <= N; i++) {
		getline(cin, s);
		if (s.substr(0, 4) == "push") {
			p = stoi(s.substr(5));
			a[count++] = p;
		} else if (s == "pop") {
			count == 0 ? cout << -1 << '\n' : cout << a[--count] << '\n';
		} else if (s == "size") {
			cout << count << '\n';
		} else if (s == "empty") {
			count == 0 ? cout << 1 << '\n' : cout << 0 << '\n';
		} else if (s == "top") {
			count == 0 ? cout << -1 << '\n' : cout << a[count - 1] << '\n';
		}
	}

	return 0;
}
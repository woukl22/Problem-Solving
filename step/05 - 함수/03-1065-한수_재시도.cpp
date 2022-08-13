#include <iostream>
using namespace std;

bool han(int n) {
	int a, b, c;
	a = n / 100;			  // 100의 자리
	b = (n - a * 100) / 10;   // 10의 자리
	c = n - a * 100 - b * 10; // 1의 자리

	if (n <= 99 || (a - b == b - c)) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int N = 10000;
	int num = 0;

	while (N > 1000) {
		cin >> N;
	}

	for (int i = 1; i <= N; i++) {
		if (han(i)) {
			num++;
		}
	}

	cout << num << '\n';

	return 0;
}
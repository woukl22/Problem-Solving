#include <iostream>
using namespace std;

int selfN(int n) {
	int a, b, c, d;
	a = n / 1000;
	b = (n - a * 1000) / 100;
	c = (n - a * 1000 - b * 100) / 10;
	d = (n - a * 1000 - b * 100 - c * 10);

	return n + a + b + c + d;
}

int main() {
	int arr[10001] = {
		0,
	};
	for (int i = 1; i < 10000; i++) {
		if (selfN(i) <= 10000) {
			arr[selfN(i)] = selfN(i);
		}
	}
	for (int i = 1; i < 10000; i++) {
		if (arr[i] == 0) {
			cout << i << '\n';
		}
	}
	return 0;
}
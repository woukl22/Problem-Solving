#include <iostream>
using namespace std;
int main() {
	int K, n;
	cin >> K;
	int arr[K];
	int count = 0, sum = 0;
	for (int i = 0; i < K; i++) {
		cin >> n;
		if (n != 0) {
			arr[count] = n;
			sum += arr[count++];
		} else if (n == 0) {
			if (count != 0) {
				sum -= arr[--count];
			} else {
				continue;
			}
		}
	}
	cout << sum << '\n';
	return 0;
}
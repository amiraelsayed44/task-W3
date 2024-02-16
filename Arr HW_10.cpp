#include <iostream>
#include <cassert>
using namespace std;

int main() {
	int n;
	cin >> n;
	const int max = 501;
	int arr[max] = { 0 };

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		assert(0 <= value && value <= 500);
		arr[value]++;
	}

	for (int i = 0; i < max; ++i) {
		while (arr[i]) {
			--arr[i];
			cout << i << " ";
		}
	}
}



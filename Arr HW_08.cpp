#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	const int max = 771;
	int arr[max] = {0};

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		value += 500;
		arr[value]++;
	}
	int max_pos = 0;
	for (int i = 0; i < max; i++) {
		if (arr[max_pos] < arr[i])
			max_pos = i;
	}
	cout << max_pos - 500 << " has repeated " << arr[max_pos] << " times ";
}


#include <iostream>
using namespace std;

int main() {
	int arr[999];
	int x;
	cin >> x;

	for (int i = 0; i < x; i++)
		cin >> arr[i];
	for (int i = 0; i < x / 2; i++) {
		if (arr[i] != arr[x - 1 - i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}

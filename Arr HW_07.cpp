#include<iostream>
using namespace std;

int main() {
	int n, q, arr[200];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cin >> q;
	while (q--) {
		int num;
		cin >> num;

		int pos = -1;
		for (int i = n - 1; i >= 0; --i) {
			if (arr[i] == num) {
				pos = i;
				break;
			}
		}
		cout << pos << endl;
	}
}

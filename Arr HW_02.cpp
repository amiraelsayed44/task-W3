
#include<iostream>
using namespace std;

int main() {

	const int N = 199;	

	int n, a[N], min = 10000, max = -1;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < min) {
			min = a[i];
		}
		if (a[i] > max) {
			max = a[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == min)
			a[i] = max;
		else if (a[i] == max)
			a[i] = min;
	}

	for (int i = 0; i < n; i++) {
		if (i)
			cout << " ";
		cout << a[i];
	}
}

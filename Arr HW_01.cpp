
#include<iostream>
using namespace std;

int main() {
	const int N = 200;
	int X, a[N];

	cin >> X;
	for (int i = 0; i < X; i++) {
		cin >> a[i];
	}

	bool increasing = 1; 
	for (int i = 1; i < X; i++) {
		if (a[i] < a[i - 1]) {
			increasing = 0;
			break;
		}
	}
	if (increasing) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}

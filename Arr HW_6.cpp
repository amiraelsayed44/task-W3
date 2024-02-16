
#include<iostream>
using namespace std;

int main() {
	int n, tmp, min[3];

	cin >> n;
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;

		if (i < 3)
			min[i] = value;
		else {
			int max_pos = 0;
			for (int j = 1; j < 3; ++j) {
				if (min[max_pos] < min[j])
					max_pos = j;
			}

			if (value < min[max_pos])
				min[max_pos] = value;
		}
	}

	int mx_pos = 0;
	for (int j = 1; j < 3; ++j) {
		if (min[mx_pos] < min[j])
			mx_pos = j;
	}
	tmp = min[2];
	min[2] = min[mx_pos];
	min[mx_pos] = tmp;

	if (min[0] > min[1]) {
		tmp = min[0];
		min[0] = min[1];
		min[1] = tmp;
	}

	for (int i = 0; i < 3; i++)
		cout << min[i] << " ";
}



#include <iostream>
#include <cassert>
using namespace std;

int main() {
	int arr[999];	
	int x;   
	cin >> x;

	for (int i = 0; i < x; i++)
		cin >> arr[i];
	cout << arr[0] << "  ";
	for (int i = 1; i < x; i++) {
		assert(arr[i] >= arr[i - 1]); 

		if (arr[i] != arr[i - 1])
			cout << arr[i] << "  ";
	}
}

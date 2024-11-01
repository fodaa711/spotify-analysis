#include<iostream>
using namespace std;
int main() {
	int a = 0;
	int arr[5];
	cout << "enter 5 elements" << endl;
	for (int i = 0; 5 > i; i++) {
		cin >> arr[i];
		for (int i = 0; 5 > i; i++) {
			for (int j = i + 1; 5 > j; j++) {
				if (arr[i] > arr[j])
					a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
				return 0;

			}
		}
	}
}
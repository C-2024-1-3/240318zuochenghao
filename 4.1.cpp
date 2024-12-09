#include <iostream>	
using namespace std;
int main() {
	int arr1[10];
	int arr2[10];
	int a = 0;
	cout << "enter ten numbers:";
	for (int i = 0; i < 10; i++) {
		cin >> arr1[i];
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		bool b = 0;
		for (int j = 0; j < i; j++) {
			if (arr1[i] == arr1[j]) {
				b = 1;
				break;
			}
		}
		if (b == 0) {
			arr2[a] = arr1[i];
			a++;
		}
	}
	cout << "The distinct numbers are: ";
	for (int i = 0; i < a; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;
	return 0;
}
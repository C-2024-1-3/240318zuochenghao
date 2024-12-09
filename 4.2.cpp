#include <iostream>
using namespace std;
void bubble(double arr[], int a) {
	for (int i = 0; i < a - 1; i++) {
		for (int j = 0; j < a - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main() {
	double arr[10];
	cout << "请输入十个双精度数字";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	bubble(arr, 10);
	cout << "排序后为";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
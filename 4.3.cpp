#include <iostream>
using namespace std;
int main() {
	bool arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = 0;
	}
	for (int i = 1; i <= 100; i++) {
		for (int j = i-1; j < 100; j+=i) {
			arr[j]=!arr[j] ;
		}
	}
	for (int i = 0; i < 100; i++) {
		if (arr[i] == 1) {
			cout << i +1<< " ";
		}
	}
	return 0;
}
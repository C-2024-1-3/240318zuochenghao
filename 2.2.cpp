#include <iostream>
using namespace std;
int main() {
	cout << "请输入x的值";
	double x, y;
	cin >> x;
	if (0 < x &&x<1){
		y = 3 - 2 * x;
		cout << y;
	}
	else if (1 <= x&&x<5){
		y = 2 / (4 * x) + 1;
		cout << y;
	}
	else if (5 <= x &&x<10){
		y = x * x;
		cout << y;
	}
	else {
		cout << "输入的结果无效";
	}
	return 0;
}
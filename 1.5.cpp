#include <iostream>
using namespace std;
int main() {
	double a;
	cout << "请输入摄氏温度：";
	cin >> a;
	cout << "转换为华氏温度：" << a * 1.8 + 32;

	return 0;
}
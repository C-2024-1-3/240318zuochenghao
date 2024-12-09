#include <iostream>
using namespace std;
void temp(int a, int b, int& max, int& min) {
	int m=a;
	int n=b;
	while (n != 0) {
		int ch = n;
		n = m % n;
		m = ch;
	}
	max = m;
	min = a * b / max;
}
int main() {
	int a, b, c, d;
	cout << "请输入第一个自然数：";
	cin >> a;
	cout << "请输入第二个自然数：";
	cin >> b;
	temp(a, b, c, d);
	cout << "两个自然数的最大公约数是" << c << endl;
	cout << "两个自然数的最小公倍数是" << d << endl;
	return 0;
}
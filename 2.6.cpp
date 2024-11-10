#include <iostream>
using namespace std;
int main() {
	int a, b;
		cout << "请输入第一个正整数";
	cin >> a;
	cout << "请输入第二个正整数";
	cin >> b;
	int tempa = a;
	int  tempb= b;
	while (tempb != 0) {
		int ch = tempa % tempb;
		tempa = tempb;
		tempb = ch;
	}
	cout << "两个正整数的最大公约数是" << tempa << endl;
	cout << "两个正整数的最小公倍数是" << a * b/tempa << endl;
	return 0;
}
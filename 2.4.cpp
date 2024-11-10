#include <iostream>
using namespace std;
int main() {
	double a, b;
	char sym;
	cout << "请输入第一个数字";
	cin >> a;
	cout << "请输入运算符";
	cin >> sym;
	cout << "请输入第二个数字";
	cin >> b;
	switch (sym) {
	case'+':
		cout << a << '+' << b << '=' << a + b << endl;
		break;
	case'-':
		cout << a << '+-' << b << '=' << a - b << endl;
		break;
	case'*':
		cout << a << '*' << b << '=' << a * b << endl;
		break;
	case'/':
		if (b==0) {
			cout << "除数不能为0" << endl;

		}
		else { cout << a << '/' << b << '=' << a / b << endl; }
		break;
	case'%':
		if (b==0) {
			cout << "除数不能为0" << endl;
		}
		else { cout << a << '%' << b << '=' << int(a) % int(b) << endl; }
		break;
	default:
		cout << "非法运算符";
	}
	return 0;
	
	}
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
	cout << "�������һ����Ȼ����";
	cin >> a;
	cout << "������ڶ�����Ȼ����";
	cin >> b;
	temp(a, b, c, d);
	cout << "������Ȼ�������Լ����" << c << endl;
	cout << "������Ȼ������С��������" << d << endl;
	return 0;
}
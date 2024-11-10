#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入三角形三条边长：";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b || a == c || b == c) {
			cout << "该三角形是等腰三角形"<<endl;
		}
		else {
			cout << "该三角形不是等腰三角形"<<endl;
		}
		cout << "其周长为" << a + b + c << endl;
	}
	else {
		cout << "这不是三角形";
	}
	
}
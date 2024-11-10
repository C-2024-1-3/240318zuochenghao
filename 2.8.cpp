#include<iostream>
using namespace std;
int main() {
	double a;
	cout << "请输入一个数值a" << endl;
	cin >> a;
	double xn=a;
	double xn_1;
	while (1) {
		if (a < 0) {
			break;
		}
		else {
			xn_1 = 0.5 * (xn + a / xn);
			if (xn-xn_1<1e-5){
				break;
			}
			xn = xn_1;
		}
	}
		cout << "a的平方根是" << xn_1<<endl;
}

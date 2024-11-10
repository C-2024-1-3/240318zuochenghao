#include <iostream>
using namespace std;
int main() {
	int D = 0;//天数
	int a ;//最后一天买的苹果
	int b=0 ;//一共购买的苹果
	double M = 0;
	for (a = 1; b <= 100; D++)
	{
		a=a * 2;
		b = a + b;
	}
	M = 0.80 * (b - a)/(D-1) ;
	cout << "平均花钱" << M<< endl;
}
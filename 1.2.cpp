#include<iostream>
using namespace std;
int main()
{
	const double A = 3.1415926;
	double r, h;
	cout << "输入圆锥的底半径：";
	cin >> r;
	cout << "输入圆锥的高:";
    cin >> h;
	double v = A * r * r * h/3;
	cout << "圆锥的体积是："<<v << endl;

	return 0;
}
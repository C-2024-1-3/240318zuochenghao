#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:      // 数据成员为私有的
	int hour;
	int minute;
	int sec;
public:
	void input()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void output()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl;           //定义t1为Time类对象
	tl.input();       
	tl.output();       
	return 0;
}
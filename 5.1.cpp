#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:      // ���ݳ�ԱΪ˽�е�
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
	Time tl;           //����t1ΪTime�����
	tl.input();       
	tl.output();       
	return 0;
}
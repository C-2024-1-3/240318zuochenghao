//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
using namespace std;
int main()
{
	Student stud;                //�������
	Student stud1;
	stud1.set_value(007, "tcg", 'm');
	stud.display();              //ִ��stud�����display����
	stud1.display();
	return 0;
}
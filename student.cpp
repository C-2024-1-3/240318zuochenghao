//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h" 
using namespace std;
void Student::display()         
{
    cout << "num��" << num << endl;
    cout << "name��"<< name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int n, const char* m, char s)
{
    num = n;
    int i = 0;
   for(1; m[i] != '\0' && i < 19;i++)
    {
        name[i] = m[i];
    }
   name[i] = '\0';
    sex = s;
}
#include <iostream>
using namespace std;

int main() {
    int letters = 0;
    int spaces = 0;
    int digits = 0;
    int others = 0;
    char c;
    while (1) {
        c = cin.get();
        if (c == '\n') {
            break;
        }
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            letters++;
        }
        else if (c == ' ') {
            spaces++;
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else {
            others++;
        }
    }
    cout << "英文字母个数：" << letters << endl;
    cout << "空格个数：" << spaces << endl;
    cout << "数字字符个数：" << digits << endl;
    cout << "其它字符个数：" << others << endl;
    return 0;
}
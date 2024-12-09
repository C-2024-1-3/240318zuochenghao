#include <iostream>
#include <string>
using namespace std;
int parseHex(const char* const hexString) {
    int a = 0;
    for (int i = 0; hexString[i] != '\0'; i++) {
        char ch = hexString[i];
        int b;
        if (ch >= '0' && ch <= '9') {
            b = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            b = ch - 'A' + 10;
        }
        else if (ch >= 'a' && ch <= 'f') {
            b = ch - 'a' + 10;
        }
        else {
            return 0;
        }
        a = a * 16 + b;
    }
    return a;
}

int main() {
    string hexStr;
    cout << "请输入十六进制数的字符串表示: ";
    cin >> hexStr;
    int m = parseHex(hexStr.c_str());
    if (m == 0) {
        cout << "输入的字符串非法" << endl;
    }
    else {
        cout << "转换后的十进制数为: " << m << endl;
    }
        return 0;
}
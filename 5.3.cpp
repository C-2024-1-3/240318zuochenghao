#include <iostream>
using namespace std;
class cft {
private:
    double length;
    double width;
    double height;
public:
    void input() {
        cout << "请输入长方柱的长：";
        cin >> length;
        cout << "请输入长方柱的宽：";
        cin >> width;
        cout << "请输入长方柱的高：";
        cin >> height;
    }
    double volume() {
        return length * width * height;
    }
    void output() {
        cout << "该长方柱的体积为：" << volume() << endl;
    }
};

int main() {
    cft m[3]; 
    for (int i = 0; i < 3; i++) {
        cout << "请输入第" << (i + 1) << "个长方柱的长宽高：" << endl;
        m[i].input();
    }
    for (int i = 0; i < 3; i++) {
        m[i].output();
    }

    return 0;
}
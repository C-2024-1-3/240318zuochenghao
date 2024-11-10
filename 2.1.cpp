#include <iostream>
using namespace std;
int main() {
	char ch;
	cout << "ÇëÊäÈë×Ö·û:"  ;
	cin >>ch;
	if (ch >= 'a' && ch <= 'z') {
		char Ch = ch - 32;
		cout << Ch;
	}
	else {
		int  letter= static_cast<int>(ch);
		cout << letter + 1;
	}
	return 0;
}
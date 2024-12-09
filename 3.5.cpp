#include <iostream>
using namespace std;
int peach(int a) {
	if (a == 10) {
		return 1;
	}
	else  {
		return (peach(a + 1) + 1) * 2;
	}
}
int main() {
	cout << "第一天摘得桃子为" << peach(1);
	return 0;
}
#include <iostream>
using namespace std;
int length(const char s[]) {
	int count = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		count++;
	}
	return count;
}
int indexOf(const char *s1, const char*s2) {
	int a = length(s1);
	int b = length(s2);
	for (int i = 0; i < b ; i++) {
		int j;
		for (j = 0; j < a; j++) {
			if (s2[i + j] != s1[j]) {
				break;
			}
		}
		if (j == a) {
			return i;
		}
	}
	return -1;
}
int main() {
	char s1[100];
	char s2[100];
	cout << "Enter the first string:";
	cin.getline(s1, 100);
	cout << "Enter the second string:";
	cin.getline(s2, 100);
	int result = indexOf(s1, s2);
	if (result != -1) {
		cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\") is " << result << endl;
	}
	else {
		cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\") is " << result << endl;
	}

	return 0;

}
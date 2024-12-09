#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z') {
            counts[ch - 'A']++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
    }
}

int main() {
    char s[100];
    int counts[26] = { 0 }; 
    cout << "Enter a string: ";
    cin.getline(s, 100); 
    count(s, counts);
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            char ch = (i + 'a'); 
            cout  << ch << " : " << counts[i]<<"times" << endl;
        }
    }

    return 0;
}
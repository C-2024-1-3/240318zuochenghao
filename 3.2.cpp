#include <iostream>
#include <iomanip>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1)return false;
	if (num < 4)return true;
	if (num % 2 == 0 || num % 3 == 0)return false;
	for (int i = 5; i * i <= num; i += 6) {
		if (num % i == 0 || num % (i + 2) == 0)return false;
	}return true;
}
int main() {
	int a=0;
	for (int b = 2; a < 200; b++) {
		if (is_prime(b))
		{
			cout << b<<" ";
			a++;
			if (a % 10 == 0)
			{
				cout << endl;
			}
		}
	}
}
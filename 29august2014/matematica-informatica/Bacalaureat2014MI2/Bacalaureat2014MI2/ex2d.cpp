using namespace std;

#include <iostream>

int main() {
	int n = 0, x, a, b, c;
	do {
		cin >> x;
		a = 0; b = 1;
		do {
			c = a + b;
			a = b;
			b = c;
		} while (c < x);
		if (x == c) n++;
	} while (x != 0);
	cout << n << endl;
	return 0;
}
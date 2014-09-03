using namespace std;

#include <iostream>

void triplete(int n) {
	int x, y, z;
	for (x = 0; x <= n; x++)
		for (y = x + 1; y <= n; y++) 
			if ((n - x * y) % y == 0 && (n - x * y) / y > y)
				cout << "(" << x << "," << y << "," << (n - x * y) / y << ")" << endl;
}

int main() {
	int n;
	do {
		cout << "n=";
		cin >> n;
	} while (n < 2 || n>10000);
	triplete(n);
	return 0;
}
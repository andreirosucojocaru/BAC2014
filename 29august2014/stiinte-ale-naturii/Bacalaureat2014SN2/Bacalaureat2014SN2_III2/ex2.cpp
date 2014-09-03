using namespace std;

#include <iostream>

int main() {
	int ok = 1, i, x;
	for (i = 1; i <= 10; i++) {
		cin >> x;
		if (x >= 2014) ok = 0;
	}
	cout << ok << endl;
	return 0;
}
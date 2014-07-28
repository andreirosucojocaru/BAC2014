using namespace std;

#include <iostream>

int main() {
	int ok, i, x;
	ok = 0;
	for (i = 1; i <= 10; i++) {
		cin >> x;
		if (x == 2014)
			ok = 1;
	}
	cout<<ok;
	return 0;
}
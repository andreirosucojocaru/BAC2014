using namespace std;

#include <iostream>

int main() {
	char c;
	cout << "c="; cin >> c;
	switch (c) {
		case 'a':
		case 'e':
		case 'i':
			c++;
			break;
		default:
			c--;
	}
	cout << c << endl;
	return 0;
}
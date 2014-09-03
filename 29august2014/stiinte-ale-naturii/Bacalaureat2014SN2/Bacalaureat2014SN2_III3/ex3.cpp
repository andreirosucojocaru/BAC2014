using namespace std;

#include <iostream>

int main() {
	int n, *vector, k, numar_curent = 2;
	do {
		cout << "n=";
		cin >> n;
	} while (n < 2 || n > 50);
	vector = new int [n];
	for (k = 0; k < n; k++) {
		while (numar_curent % 5 == 0)
			numar_curent += 2;
		vector[k] = numar_curent;
		numar_curent += 2;
	}
	for (k = 0; k < n; k++)
		cout << vector[k] << " ";
	cout << endl;
	delete[] vector;
	return 0;
}
using namespace std;

#define SPACING 2

#include <iostream>
#include <iomanip>

int main() {
	int m, n, **matrice, i, j, k, numar_curent=2;
	do {
		cout << "m=";
		cin >> m;
	} while (m < 2 || m > 20);
	do {
		cout << "n=";
		cin >> n;
	} while (n < 2 || n > 20);
	matrice = new int*[m];
	for (k = 0; k < m; k++)
		matrice[k] = new int[n];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			while (numar_curent % 5 == 0)
				numar_curent += 2;
			matrice[i][j] = numar_curent;
			numar_curent += 2;
		}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			cout << setw(SPACING) << matrice[i][j] << " ";
		cout << endl;
	}
	for (k = 0; k < m; k++)
		delete[] matrice[k];
	delete[] matrice;
	return 0;
}
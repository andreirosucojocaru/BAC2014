using namespace std;

#include <iostream>
#include <fstream>

#define MAX 1024

int main() {
	long numar;
	// vectori ce contin
	// - valorile subnumerelor aferente numerelor din fisier
	// - numarul de aparitii pentru fiecare subnumar
	int *subnumere, *ocurente, dimensiune = 0;
	// alocare memorie
	subnumere = new int[MAX];
	ocurente = new int[MAX];
	// deschidere fisier
	ifstream fisier("bac.txt");
	if (fisier.is_open()) {
		// citire numar din fisier
		while (fisier>>numar) {
			while (numar%100 > 10) {
				// determinare subnumar
				int subnumar = numar % 100, gasit = 0;
				// cautare subnumar in vector
				for (int k=0; k<dimensiune && !gasit; k++)
					// subnumarul a fost gasit in vector, se incrementeaza numarul de ocurente
					if (subnumere[k] == subnumar) {
						ocurente[k]++;
						gasit = 1;
					}
				// subnumarul nu a fost gasit in vector, se stocheaza (numarul de ocurente este 1)
				if (!gasit) {
					subnumere[dimensiune] = subnumar;
					ocurente[dimensiune] = 1;
					dimensiune++;
				}
				numar /= 10;
			}
		}
		// inchidere fisier
		fisier.close();
	}
	// determinare numar maxim de ocurente
	int maxim = 1;
	for (int k=0; k<dimensiune; k++)
		if (ocurente[k]>=maxim)
			maxim = ocurente[k];
	// afisarea subnumerelor care apar de cele mai multe ori
	for (int k=0; k<dimensiune; k++)
		if (ocurente[k]==maxim)
			cout<<subnumere[k]<<" ";
	cout<<endl;
	// dealocare memorie
	delete subnumere;
	delete ocurente;
	return 0;
}
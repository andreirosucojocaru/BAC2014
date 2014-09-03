using namespace std;

#define MAX 10

#include <iostream>
#include <fstream>

int numar_putere(long n) {
	int rezultat = 0;
	while (n != 1)
		if (n % 10 == 0) {
			rezultat++;
			n /= 10;
		}
		else
			return -1;
	return rezultat;
}

long putere_numar(int putere) {
	int rezultat = 1;
	while (putere) {
		rezultat *= 10;
		putere--;
	}
	return rezultat;
}

int main() {
	long n, numar_curent;
	int index, total = 0, *ocurente = new int[MAX];
	for (index = 0; index < MAX; index++)
		ocurente[index] = 0;
	// deschidere fisier
	ifstream fisier("bac.txt");
	if (fisier.is_open()) {
		fisier >> n;
		while (fisier >> numar_curent) {
			// determinare putere p a numarului de forma 10^p citit din fisier
			index = numar_putere(numar_curent);
			if (index != -1) { // numarul citit din fisier are forma corecta
				// incrementare numar de ocurente a numarului citit din fisier
				ocurente[numar_putere(numar_curent)]++;
				// total de numere citite din fisier
				total++;
			}
		}
		// inchidere fisier
		fisier.close();
	}
	if (total < n)
		cout << "Nu exista" << endl;
	else {
		index = 0;
		total = 0; // total de numere pana la indexul curent
		while (total < n) // nu s-a ajuns la pozitia cautata
			// adaugare numar de ocurente de pe pozitia curenta
			total += ocurente[index++]; 
		cout << putere_numar(--index) << endl;
	}
	delete[] ocurente;
	return 0;
}
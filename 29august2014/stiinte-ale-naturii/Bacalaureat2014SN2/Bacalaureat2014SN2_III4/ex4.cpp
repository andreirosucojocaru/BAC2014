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
	int index, total = 0, *aparitii = new int[MAX];
	for (index = 0; index < MAX; index++)
		aparitii[index] = 0;
	// deschidere fisier
	ifstream fisier("bac.txt");
	if (fisier.is_open()) {
		fisier >> n;
		while (fisier >> numar_curent) {
			// determinare putere p a numarului de forma 10^p citit din fisier
			index = numar_putere(numar_curent);
			if (index != -1) { // numarul citit din fisier are forma corecta
				if (!aparitii[index])
					// numarul de pe pozitia index nu a mai fost descoperit pana acum
					// incrementare total de numere distincte
					total++;
				// macare a numarului de pe pozitia index ca distinct
				aparitii[index] = 1;
			}
		}
		// inchidere fisier
		fisier.close();
	}
	if (total < n)
		cout << "Nu exista" << endl;
	else {
		index = 0;
		total = 0; // total numere distincte pana la indexul curent
		while (total < n) // nu s-a ajuns la pozitia cautata
			// incrementare total numere distincte, daca este cazul
			total += aparitii[index++];
		cout << putere_numar(--index) << endl;
	}
	delete[] aparitii;
	return 0;
}
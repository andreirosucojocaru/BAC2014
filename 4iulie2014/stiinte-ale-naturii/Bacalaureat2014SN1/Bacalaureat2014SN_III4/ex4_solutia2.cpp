/*using namespace std;

#include <iostream>
#include <fstream>

#define MAX 10 // pot fi maxim 10 cifre, insa nu este obligatoriu ca toate sa se regaseasca in fisier

int main() {
    long numar;
    // vector ce contine numarul de aparitii pentru fiecare cifra
	// ocurente[i] - numarul de aparitii pentru cifra i, i=0..9
    int *ocurente, dimensiune = 0;
    // alocare memorie
    ocurente = new int[MAX];
	for (int contor = 0; contor < MAX; contor++)
		ocurente[contor] = 0;
    // deschidere fisier
    ifstream fisier("bac.txt");
    if (fisier.is_open()) {
        // citire numar din fisier
        while (fisier>>numar) {
            while (numar != 0) {
                // determinare cifra
                int cifra = numar % 10;
				// incrementarea numarului de ocurente pentru cifra curenta
                ocurente[cifra]++;
                numar /= 10;
            }
        }
        // inchidere fisier
        fisier.close();
    }
    // determinare numar maxim de ocurente
    int maxim = 1;
    for (int contor = 0; contor < MAX; contor++)
        if (ocurente[contor] >= maxim)
            maxim = ocurente[contor];
    // afisarea subnumerelor care apar de cele mai multe ori
    for (int contor = 0; contor < MAX; contor++)
        if (ocurente[contor] == maxim)
            cout<<contor<<" ";
    cout<<endl;
    // dealocare memorie
    delete ocurente;
    return 0;
}*/
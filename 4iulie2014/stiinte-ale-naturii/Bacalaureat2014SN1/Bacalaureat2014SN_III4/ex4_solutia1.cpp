using namespace std;

#include <iostream>
#include <fstream>

#define MAX 10 // pot fi maxim 10 cifre, insa nu este obligatoriu ca toate sa se regaseasca in fisier

int main() {
    long numar;
    // vectori ce contin
    // – valorile cifrelor aferente numerelor din fisier
    // – numarul de aparitii pentru fiecare cifra
    int *cifre, *ocurente, dimensiune = 0;
    // alocare memorie
    cifre = new int[MAX];
    ocurente = new int[MAX];
    // deschidere fisier
    ifstream fisier("bac.txt");
    if (fisier.is_open()) {
        // citire numar din fisier
        while (fisier>>numar) {
            while (numar != 0) {
                // determinare cifra
                int cifra = numar % 10, gasit = 0;
                // cautare cifra in vector
                for (int contor = 0; contor < dimensiune && !gasit; contor++)
                    // cifra a fost gasita in vector, se incrementeaza numarul de ocurente
                    if (cifre[contor] == cifra) {
                        ocurente[contor]++;
                        gasit = 1;
                    }
                // cifra nu a fost gasit in vector, se stocheaza (numarul de ocurente este 1)
                if (!gasit) {
                    cifre[dimensiune] = cifra;
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
    for (int contor = 0; contor < dimensiune; contor++)
        if (ocurente[contor] >= maxim)
            maxim = ocurente[contor];
    // afisarea subnumerelor care apar de cele mai multe ori
    for (int contor = 0; contor < dimensiune; contor++)
        if (ocurente[contor] == maxim)
            cout<<cifre[contor]<<" ";
    cout<<endl;
    // dealocare memorie
    delete cifre;
    delete ocurente;
    return 0;
}
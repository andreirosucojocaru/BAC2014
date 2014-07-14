using namespace std;

#define MIN 3
#define MAX 50

#include <iostream>

int main() {
	int m, n;
	// citirea numarului de linii si de coloane al tabloului bidimensional
	// cu verificarea restrictiilor
	do {
		cout<<"m=";
		cin>>m;
	} while (m<MIN || m>MAX);
	do {
		cout<<"n=";
		cin>>n;
	} while (n<MIN || n>MAX);
	// alocare memorie tablou bidimensional
	int** matrice = new int*[m];
	for (int k=0; k<m; k++)
		matrice[k]=new int[n];
	// citirea tabloului bidimensional
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++) {
			cout<<"matrice["<<(i+1)<<"]["<<(j+1)<<"]=";
			cin>>matrice[i][j];
		}
	// eliminare ultima coloana
    for (int k=0;k<m;k++) {
		matrice[k][n-2]=matrice[k][n-1];
		matrice[k][n-1]=0;
	}
	// eliminare ultima linie
	for (int k=0;k<n;k++) {
		matrice[m-2][k]=matrice[m-1][k];
		matrice[m-1][k]=0;
	}
	// afisarea tabloului bidimensional
	for (int i=0; i<m-1; i++) {
		for (int j=0; j<n-1; j++)
			cout<<matrice[i][j]<<" ";
		cout<<endl;
	}
	// dealocare memorie tablou bidimensional
	for (int k=0;k<m;k++)
		delete matrice[k];
	delete matrice;
	return 0;
}
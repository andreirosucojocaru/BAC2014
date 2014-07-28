using namespace std;

#include <iostream>

int main() {
	int n, *vector, x, contor, par = 0;
	do {
		cout<<"n=";
		cin>>n;
	} while (n <= 2 || n >= 50);
	vector = new int[n];
	for (contor=0; contor < n; contor++) {
		int conditie = 0;
		do {
			cout<<"vector["<<(contor+1)<<"]=";
			cin>>vector[contor];
			if (vector[contor] < 10000) {
				if (vector[contor] % 2 == 0) 
					par = 1;
				if (contor == (n - 1)) {
					if (par)
						conditie = 1;
				} 
				else
					conditie = 1;
			}
		} while (!conditie);
	}
	do {
		cout<<"x=";
		cin>>x;
	} while (x <= 0 || x >= 10);
	for (contor = 0; contor < n; contor++)
		if (vector[contor] %2 == 0)
			vector[contor] -= x;
	for (contor = 0; contor < n; contor++)
		cout<<vector[contor]<<" ";
	cout<<endl;
	delete vector;
	return 0;
}
using namespace std;

#include <iostream>

int main() {
	int n, d=2;
	cout<<"n="; cin>>n;
	while (d<=n) {
		int p=0;
		while (n%d==0) {
			p++;
			n=n/d;
		}
		if (p%2==0 && p) cout<<d<<" ";
		d++;
	}
	cout<<n;
	return 0;
}
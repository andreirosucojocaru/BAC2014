using namespace std;

#include <iostream>

int factorial(int n) {
	int result = 1;
	for (int k=2; k<=n; k++)
		result*=k;
	return result;
}

void interval(int n, int* a, int* b) {
	int base = factorial(n-1);
	*a = base + 1;
	*b = base * n * (n+1) - 1;
}

int main() {
	int n;
	do {
		cout<<"n=";
		cin>>n;
	} while (n<2 || n>10);
	int a, b;
	interval(n, &a, &b);
	cout<<"a="<<a<<" b="<<b<<endl;
	return 0;
}
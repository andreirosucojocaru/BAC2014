using namespace std;

#include <iostream>

struct timp {
	int minut;
	int secunda;
} start, stop;

int main() {
	cout<<"start"<<endl;
	cout<<"minut:"; cin>>start.minut;
	cout<<"secunda:"; cin>>start.secunda;
	cout<<"stop"<<endl;
	cout<<"minut:"; cin>>stop.minut;
	cout<<"secunda:"; cin>>stop.secunda;
	if (start.minut<stop.minut)
		cout<<"acceptat"<<endl;
	else if (start.minut==stop.minut) {
		if (start.secunda<stop.secunda)
			cout<<"acceptat"<<endl;
		else
			cout<<"respins"<<endl;
	} else if (start.minut>stop.minut)
		cout<<"respins"<<endl;
	return 0;
}
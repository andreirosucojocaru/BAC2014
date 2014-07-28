using namespace std;

#include <iostream>

int main() {
	int minut_start, secunda_start, minut_stop, secunda_stop;
	cout<<"start"<<endl;
	cout<<"minut:"; cin>>minut_start;
	cout<<"secunda:"; cin>>secunda_start;
	cout<<"stop"<<endl;
	cout<<"minut:"; cin>>minut_stop;
	cout<<"secunda:"; cin>>secunda_stop;
	if (minut_start<minut_stop)
		cout<<"acceptat"<<endl;
	else if (minut_start==minut_stop) {
		if (secunda_start<secunda_stop)
			cout<<"acceptat"<<endl;
		else
			cout<<"respins"<<endl;
	} else if (minut_start>minut_stop)
		cout<<"respins"<<endl;
	return 0;
}
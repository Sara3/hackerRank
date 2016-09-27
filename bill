
//---------------------------------------------------------
// File--------project1.cpp
// Programmer--Sabera Daqiq

// Project-----Project #1

//
// This program computes an itemized bill for an on-line
// music retailer.
//---------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

	double subscription_charge;
	int tunes;
	double donation;
	double tax;
	double total;
	double tunes_downloaded;
	double x;


	cout << "Subscription charge:- ";
	cin >> subscription_charge;

	cout << "Tunes downloaded:---- ";
	cin >> tunes;
	cout<<endl;

	cout <<setw (8)<< "Subscription-------- $  "<< subscription_charge << endl;

	tunes_downloaded = tunes*1.29;

	cout << setw(8)<<"Download fee-------- $ " << tunes_downloaded << endl;

	
	cout.setf (ios::fixed);
	cout.setf (ios::showpoint);
	cout.precision (2);


     donation = tunes_downloaded * .1;

	x = subscription_charge + tunes_downloaded;
	tax = (x - donation)*.06;
	cout<<setw (8)<<"Tax----------------- $  "<<tax<<endl;

	 total =x+tax;
	 cout<<setw (8)<<"Total--------------- $ "<<total<<endl;

cout<<endl;
	
      cout<<setw (8)<<"Donation------------ $   " <<donation<<endl;
return 0;
}

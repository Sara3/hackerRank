/*

This program display an approximate of sinh(X) And prompt the user to enter a value for x
*/
//---------------------------------------------------------
// File--------sinh(x).cpp
// Programmer--Sabera Daqiq
// Course------CSC115
// Project-----Project #3
// Due---------oct 6, 2013
//
// This program computes hyperbolic sine function sinh(x).  
//---------------------------------------------------------
#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	 double sinh;
	 char answer;
	 double term;
	 double x;
	 double count;


	 cout<<"Enter x: ";
	 cin>>x;
	 answer ='Y';

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);


	while (answer =='Y')
	{

		term=x;
		sinh=x;
		count=3;

		while (count<=33)
		{

			term=term*x*x/(count*(count-1));
			sinh+=term;
			count+=2; 

	    }
	
	cout<<"sinh(x) is: "<<sinh<<endl; 
	cout<<endl;
	cout<<"Do you want to continue? Yes(Y) or No (N): ";
	cin>>answer;
	cout<<endl;
	if (answer=='Y'){
		cout<<"Enter x: ";
		cin>>x;
	}

	}
	return 0;
}
 

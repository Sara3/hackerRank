/*
categories: small (less than 8 kilograms), medium (8 to 24 kilograms), and large (more than 24 kilograms).

\Sample Run Tiger weights

Weight #1: 7 Weight #2: 12 Weight #3: 26 Weight #4: 18 Weight #5: 29 Weight #6: 14 Weight #7: 8 Weight #8: 30 Weight #9: 23 Weight #10: 26 Weight #11: 19 Weight #12: -1

Average weight: 19.3

Small tigers : 1 Medium tigers: 6 Large tigers : 4

*/


//---------------------------------------------------------
// File--------Ave tiger.cpp
// Programmer--Sabera Daqiq
//
// Project-----Project #4
//
// This program computes the Average waight of tigers.
//---------------------------------------------------------
#include <iostream>
using namespace std;

	double weight;
	int number;
	double average;
	int small;
	int medium;
	int large;
	double sum;

	
int main(){

	number=1;
	sum=0;
	small=0;
	medium=0;
	large=0;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	cout<<"Tiger Weights"<<endl;
	cout<<"-------------"<<endl;
	cout<<endl;

	cout<<"Weight "<<number<<":  ";
	cin>>weight;

	while(weight<=!0)
	{

		sum=sum+weight;
		average=sum/number;
		number++;

		if (weight<8)
			small++;
	
		if (weight=>8&&weight<=24)
			medium++;
	
		if (weight>24)
			large++;

		
		cout<<"Weight "<<number<<":  ";
		cin>>weight;
	}

	cout<<endl;
	cout<<"Average weight: "<<average<<endl;
	cout<<endl;
	cout<<"Small tigers:   "<<small<<endl;
	cout<<"Medium tigers:  "<<medium<<endl;
	cout<<"Large tigers:   "<<large<<endl;
	
	return 0;
	}


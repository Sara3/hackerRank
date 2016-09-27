/*
. Divide the decimal number by 2 to produce an integer quotient and an integer remain-der. 
Use the remainder as the next digit to the left of the binary number. Use the quotient for further dividing. 
Repeat this process until you get 0 as the quotient. For example, sup-pose we want to compute the binary notation 
for the decimal number 13:

Step Division Quotient Remainder Binary number so far 0 13/2 6 1 1 1 6/2 3 0 01 2 3/2 1 1 101 3 1/2 0 1 1101

Stop when the quotient is 0. The binary representation of 13 is 1101.


*/


//----------------------------------------------------------------------------
// File -------- covertbasefunctions.h
// Programmer -- Sabera Daqiq
// 
// This file contains declarations for makeBites () and writeBites
// functions. See the accompanying implementation file for details.
//----------------------------------------------------------------------------

#ifndef CONVERTBASEFUNCTIONS_H
#define CONVERTBASEFUNCTIONS_H

using namespace std;

void makeBits(int value, int digits[]);
void writeBits(ofstream &outFile, int digits[]);

#endif



//----------------------------------------------------------------------------
// File -------- convertbasefunctions.cpp
// Programmer -- Sabera Daqiq

// 
// This file contains the implementations of the makeBites ()and writeBites
// functions. See details in the box comments below.
//----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//----------------------------------------------------------------------------
// void makeBits(int value, int digits[])
// 
// This function converts base 10 numbers to base two  
//
// Input parameters:
//    value ---- The base 10 numbers inputed from the file
//
// Output parameters:
//    digits[]---This array stores the remainder 
// 
// Return value:
//    None
//----------------------------------------------------------------------------

void makeBits(int value, int digits[]){
        int quotient, remainder;
		quotient=value/2; 
		remainder=value%2;
		digits[31]=remainder;

        for(int i=30; i>=0; i--){
            remainder=quotient%2;
            quotient=quotient/2; 
            digits[i]=remainder;
			}
		return;
}

//----------------------------------------------------------------------------
//void writeBits(ofstream &outFile, int digits[])
// 
// This function send the recieved array to the output file saperating them
// in to 4, 8 digit piles 
//
// Input parameters:
//    digits []----- the array is filled with computed base 2 numbers
//
// Output parameters:
//    outFile---stores the end result
// 
// Return value:
//    None
//----------------------------------------------------------------------------

void writeBits(ofstream &outFile, int digits[]){
        for(int i=0; i<=31; i++){
            if (i%8==0)
				outFile<<"  ";
		outFile<<digits[i];
		}
		outFile<<endl; 
		return;
}



//---------------------------------------------------------
// File--------convertbase.cpp
// Programmer--Sabera Daqiq

/
//
// This program will convert the base 10 digit to base 2. 
//---------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "convertbasefunctions.h"

using namespace std;

int main(){
        ifstream inFile;
        ofstream outFile;
        int digits [32];
        int value;
        
        inFile.open("decimalnumbers.txt");
		if (inFile.fail()){
			cout<<"Input file opening failed"<<endl; 
			exit(1);
			}

		outFile.open("convertbase.txt");
		if  (outFile.fail()){
			 cout<<"output file opening failed"<<endl;
			 exit(1);
            }

       inFile>>value;
       while (value>-1){
			outFile<<setw(10)<<value<<":  "; 
			makeBits(value, digits);
			writeBits(outFile, digits);
			inFile>>value;
            }
                
       inFile.close();
       outFile.close();
	   return 0; 
}



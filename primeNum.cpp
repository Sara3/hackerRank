/*
• Make a list of all the candidate numbers. • Mark out all the multiples of 2. 
• Mark out all the multiples of 3. • Mark out all the multiples of 4. • Likewise,
mark out all the multiples of all the integers lower than 1000. • All the numbers that remain are prime numbers.
*/


//---------------------------------------------------------
// File--------prjct.cpp
// Programmer--Sabera Daqiq

// Project-----Project #8

//
// This program inputs random words from a file sort them in alphabetical order and 
// output it to a file.  
//---------------------------------------------------------
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

void inputlist(ifstream &infile,string wordlist[], int &size);
void sortwords(string wordlist[], int size);
void outputlist(ofstream &outFile, string wordlist[], int size);

int main(){	
	ofstream outfile;
	ifstream infile;
	string wordlist[1000];
	int size = 1000;

	infile.open("wordlist.txt");
	if(outfile.fail()){
		cout<<"Can not open the input file";
		exit(1);
	}
	outfile.open("dictionary.txt");
	if(outfile.fail()){
		cout<<"Can not open the output file";
		exit(1);
	}
    inputlist(infile, wordlist, size);
    sortwords(wordlist, size);
    outputlist(outfile, wordlist, size);
	outfile.close();
	infile.close();
	return 0;
}
//-------------------------------------------------------------------------
//void inputlist(ifstream &infile,string wordlist[], int &size)is a function 
//that recieves the words from the file.
// Input parameters:
//    infile
//	output parameters:
//    wordlist[], size
// Return value:
//    none
//-------------------------------------------------------------------------
void inputlist(ifstream &infile,string wordlist[], int &size){
	size=0;
	getline(infile, wordlist[size]);
	while(!infile.eof()){
		size++;
		getline(infile, wordlist[size]);
	}
	return;
}
//-------------------------------------------------------------------------
//void sortwords(string wordlist[], int size)is a function 
//that sorts the words in alphabetical order
// Input parameters:
//    size- the number of words in the list
//	output parameters:
//    wordlist[]
// Return value:
//    none
//-------------------------------------------------------------------------
void sortwords(string wordlist[], int size){
	string hold;
	int maxloc;
	int lgth;
	string highname;
	string word;
	for(int sort=size; sort>=2; sort--){
		maxloc=0;
		for(int i=1; i<sort; i++){
			highname=wordlist[maxloc];
			word=wordlist[i];
			if (highname.length()<word.length())
				lgth=highname.length();
			else 
				lgth=word.length();
			if(highname[0]<word[0])
				maxloc=i;
			else if (highname[0]==word[0]){
					int k =0;			
					while (k<lgth && highname[k]==word[k]){
						if(highname[k+1]<word[k+1])
						maxloc=i;
						k++;
					}
			}
		}
		hold=wordlist[sort-1];
		wordlist[sort-1]=wordlist[maxloc];
		wordlist[maxloc]=hold;
	
	}
	return;
}
//-------------------------------------------------------------------------
//void outputlist(ofstream &outFile, string wordlist[],int size)is a function 
//that output the sorted words into a file.
// Input parameters:
//    outfile, size, wordlist[]
//	output parameters:
//    none
// Return value:
//    none
//-------------------------------------------------------------------------
void outputlist(ofstream &outfile, string wordlist[],int size){
	for(int i=0; i<size; i++)
		outfile<<wordlist[i]<<endl;
	return;
}

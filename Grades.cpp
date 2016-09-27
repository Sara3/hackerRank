/*
• A 5-digit student ID number. • The student’s score on Exam #1. • The student’s score on Exam #2. • The student’s core on the final exam.

The ID number is an integer. The exam scores are floating-point numbers. The last line of the file contains student ID number 00000 to serve as a sentinel, and it contains no exam scores.

The student’s semester average is a weighted average. Exam #1 and Exam #2 are each worth 25% of the semester average. The final exam is worth 50%. The grading scale for letter grades is:

• A: 90 - 100 • B: 80 - <90 • C: 70 - <80 • D: 60 - <70 • F: <60
*/


//---------------------------------------------------------
// File--------exam.cpp
// Programmer--Sabera Daqiq

// Project-----Project #6

//
// This program computes the average and lettergrade of students in a class.  
//---------------------------------------------------------
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void getExams(ifstream &infile, double &exam1, double &exam2, double &final);
double semesteraverage(double exam1,double exam2,double final);
char lettergrade(double average);
void putStudent(ofstream &outfile, int id, double average, char grade);

int main ()
{
	ifstream in_stream;
	ofstream out_stream;
	int id;
	int count;
	double exam1;
	double exam2;
	double final;
	double average;
	double finalaverage;
	double sum;
	char grade;
	char finalgrade;

	in_stream.open("scores.txt");
	if (in_stream.fail()){
		cout<< "input file opening failed";
		exit (1);
	}
	out_stream.open("grades.txt");
	if (out_stream.fail()){
		cout<< "output file opening failed";
		exit (1);
	}

	out_stream<<"Student"<<"   "<<"Average"<<"   "<<"Grade"<<endl;
	out_stream<<"--------  --------  ------"<<endl;

	in_stream>>id;
	count=0;
	sum=0;

	while (id!=0)
	{
		getExams(in_stream, exam1, exam2, final);
		average=semesteraverage(exam1,exam2,final);
		grade=lettergrade(average);
		putStudent(out_stream, id, average, grade);
		count++;
		sum=sum+average;
		in_stream>>id;
	}

	finalaverage=sum/count;
	finalgrade=lettergrade(finalaverage);

	out_stream<<endl;
	out_stream<<"  Class"<<"    "<<finalaverage<<"        "<<finalgrade<<endl;

	in_stream.close ();
	out_stream.close();

	return 0;
}
//-------------------------------------------------------------------------
//This function recirves exam one, exam 2 and final exam 
// from the input file.
//
// Input parameters:
//    None
//
//	output parameters:
//    exam1 ----- score of first test.
//    exam2 ----- score of second test.
//    final ----- score of the final test.
//    infile --- grade file.
//
// Return value:
//    None
//------------------------------------------------------------------------

void getExams(ifstream &infile, double &exam1, double &exam2, double &final)
{
	infile>>exam1>>exam2>>final;
}
//---------------------------------------------------------
// File--------sinh(x).cpp
// Programmer--Sabera Daqiq
// Course------CSC115
// Project-----Project #3
// Due---------oct 6, 2013
//
// This program computes hyperbolic sine function sinh(x).  
//---------------------------------------------------------

double semesteraverage(double exam1,double exam2,double final)
{
	double average;
	average=exam1*0.25+exam2*0.25+final*0.50;
	return average;
}

//-------------------------------------------------------------------------
//This function recieves the average and produces a letter grade.
//
// Input parameters:
//    average-the sum of exam one plus exame two and final exam devided by 3 
//    taken its percentage.  
//
//	output parameters:
//    none
//
// Return value:
//    grade- It is a letter grade
//-------------------------------------------------------------------------

char lettergrade(double average)
{        
	char grade;
	if (average >=90 && average<=100)
		grade='A';
	if (average>=80 && average <90)
		grade='B';
	if (average>=70 && average < 80)
		grade='C';
	if (average>=60 && average<70)
		grade='D';
	if (average<60)
		grade='F';	

	return grade;
}

//-------------------------------------------------------------------------
//This function output id average and the letter grad
//
// Input parameters:
//     id-Is the 5 digit number recieved at the in the first line 
//    average- is exam one and exam two times .25 and final exam .50
//
//	output parameters:
//    outfil-it opens the file we want to store the final values
//
// Return value:
//    None
//--------------------------------------------------------------------------

void putStudent(ofstream &outfile, int id, double average, char grade)
{
	outfile.setf(ios::fixed);
	outfile.setf(ios::showpoint);
	outfile.precision(1);

	outfile<<"  "<<id<<"    "<<average<<"        "<<grade<<endl;
}

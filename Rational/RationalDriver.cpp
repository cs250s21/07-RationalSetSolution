//***************************************************************************
// File name:  RationalDriver.cpp
// Author:     CS, Pacific University
// Date:       2/18/19
// Class:      CS250
// Assignment: Rational
// Purpose:    Example driver for class Rational
//
//***************************************************************************

#include "Rational.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	Rational cR1, cR2(4,1);
  Rational cR3(1,2), cR4(2,4), cR5;
	ofstream cOutFile;
	const string FILE = "results.txt";

	cR1.print(cout);
	cout << endl;
	cR2.print(cout);
	cout << endl;
  
	if (cR1.equals(cR2)) {
		cout << "EQUAL " << endl;
	}
	else {
		cout << "NOT EQUAL " << endl;
	}

	if (cR3.equals(cR4)) {
		cout << "EQUAL " << endl;
	}
	else {
		cout << "NOT EQUAL " << endl;
	}

  cR5 = cR3.multiply(cR4);
  cR5.print(cout);
	cout << endl << endl;

	cOutFile.open (FILE);
	if (cOutFile)
	{
		cR5.print (cOutFile);
		cOutFile << " = ";
		cR3.print (cOutFile);
		cOutFile << " * ";
		cR4.print (cOutFile);
		cOutFile << "\n\n";

		cOutFile.close ();
	}
	else
	{
		cout << " Could not open file " << FILE <<  endl;
	}

	system("pause");

	return EXIT_SUCCESS;
}
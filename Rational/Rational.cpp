//***************************************************************************
// File name:  Rational.cpp
// Author:     CS, Pacific University
// Date:       2/18/19
// Class:      CS250
// Assignment: Rational
// Purpose:    Implementation for class Rational
//
//***************************************************************************
#include "Rational.h"
#include <ostream>

using namespace std;

//*************************************************************************** 
// Constructor
//
// Description: Set the numerator and denominator
//
// Parameters:  numerator - the new numerator
//							denominator - the new denominator
//***************************************************************************
Rational::Rational(int numerator, int denominator) {
	mNumerator = numerator;
	mDenominator = denominator;
}


//*************************************************************************** 
// Function:		print
//
// Description: print the rational to the stream
//
// Parameters:  rcOutput - the stream to print to
//
// Returns:			none
//***************************************************************************
void Rational::print(ostream &rcOutput) const {
	rcOutput << mNumerator << "/" << mDenominator;
}

//*************************************************************************** 
// Function:		equals
//
// Description: determine if two rationals are equal
//
// Parameters:  rcRational - the rational to compare against
//
// Returns:			true if the rationals are equal, false otherwise
//***************************************************************************
bool Rational::equals(const Rational &rcRational) const {
	return  (rcRational.mNumerator * mDenominator ==
		rcRational.mDenominator * mNumerator);
}

//*************************************************************************** 
// Function:		multiply
//
// Description: multiply two rationals and produce a new rational
//
// Parameters:  rcRational - the rational to multiply against
//
// Returns:			the new rational produced by multiplication
//***************************************************************************
Rational Rational::multiply(const Rational &rcRational) const {
  return Rational (mNumerator * rcRational.mNumerator,
									 mDenominator * rcRational.mDenominator);

}
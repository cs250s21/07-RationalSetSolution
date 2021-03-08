//***************************************************************************
// File name:  Rational.h
// Author:     CS, Pacific University
// Date:       2/18/19
// Class:      CS250
// Assignment: Rational
// Purpose:    Definition for class Rational
//
//***************************************************************************

#ifndef RATIONAL_H
#define RATIONAL_H

#include <ostream>

using namespace std;

class Rational {
	public:
		Rational(int numerator = 0, int denominator = 1);
		void print(ostream &rcOutput) const;
		bool equals(const Rational &rcRational) const;
    Rational multiply(const Rational &rcRational) const;

	private:
		int mNumerator;
		int mDenominator;
};

#endif
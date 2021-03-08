//***************************************************************************
// File name:  RationalSet.cpp
// Author:     CS, Pacific University
// Date:       2/18/19
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Implementation for class RationalSet. Set of Rational numbers 
//             is of the form {}, {1/2}, {1/2 2/3}, ...
//
//***************************************************************************

#include "RationalSet.h"

//***************************************************************************
// Function:    isIn
//
// Description: Determine if a Rational exists in the Set
//
// Parameters:  rcRational - the Rational to check for
//
// Returned:    true if found, false otherwise
//***************************************************************************

bool RationalSet::isIn(const Rational& rcRational) const {
	bool bRetVal = false;

	for (int i = 0; i < mNumRationals; ++i)
	{
		if (macRational[i].equals(rcRational))
		{
			bRetVal = true;
		}
	}

	return bRetVal;
}

//***************************************************************************
// Function:    print
//
// Description: print the set to the given ostream
//
// Parameters:  rcOutput - the stream to write to
//
// Returned:    None
//***************************************************************************

void RationalSet::print(ostream& rcOutput) const {
	rcOutput << "{ ";
	for (int i = 0; i < mNumRationals; ++i)
	{
		macRational[i].print(rcOutput);
		if (i < mNumRationals - 1)
		{
			rcOutput << ", ";
		}
	}
	rcOutput << " }";
}


//*************************************************************************** 
// Function:    add
//
// Description: Add the given Rational to the Set. Don't allow duplicates in
//              the set.
//
// Parameters:  rcRational - the Rational to add
//
// Returned:    true if added, false otherwise
//***************************************************************************

bool RationalSet::add(const Rational& rcRational) {
	bool bRetVal = false;
	if (!isIn(rcRational) && mNumRationals < MAX_RATIONALS)
	{
		macRational[mNumRationals++] = rcRational;
		bRetVal = true;
	}

	return bRetVal;
}

//*************************************************************************** 
// Function:    intersection
//
// Description: Build a new RationalSet that is the intersection of this
//              object and rcOtherSet
//
// Parameters:  rcOtherSet - the set to intersect against
//
// Returned:    The RationalSet containing the intersection
//***************************************************************************

RationalSet RationalSet::intersection(const RationalSet& rcOtherSet) const {
	RationalSet cNewSet;

	for (int i = 0; i < mNumRationals; ++i)
	{
		if (rcOtherSet.isIn(macRational[i]))
		{
			cNewSet.add(macRational[i]);
		}
	}

	return cNewSet;
}
//***************************************************************************
// File name:  RationalSetDriver.cpp
// Author:     CS, Pacific University
// Date:       3/4/21
// Class:      CS250
// Assignment: RationalSet 
// Purpose:    Test Driver for RationalSet
//
//***************************************************************************

#include "RationalSet.h"
#include <iostream>
using namespace std;

int main() {
  // declare RationalSets
  RationalSet cRatSetOne, cRatSetTwo, cRatSetIntersection;

  // declare Rationals to use
  Rational cRationalOne(1, 100);
  Rational cRationalTwo(2, 400),
    cRationalThree(3, 900), cRationalFour;

  // Build cRatSetOne
  cRatSetOne.add(cRationalOne);
  cRatSetOne.add(cRationalTwo);
  cRatSetOne.add(cRationalThree);

  cRationalFour = cRationalOne.multiply(cRationalTwo);
  cRatSetOne.add(cRationalFour);

  // Build cRatSetTwo
  cRatSetTwo.add(cRationalTwo);
  cRatSetTwo.add(cRationalOne);
  cRatSetTwo.add(cRationalThree);

  cRationalFour = cRationalOne.multiply(cRationalThree);
  cRatSetTwo.add(cRationalFour);

  cout << "SET ONE " << endl;
  cRatSetOne.print(cout);
  cout << "\n\n"; 

  cout << "SET TWO " << endl;
  cRatSetTwo.print(cout);
  cout << "\n\n";

  // find the intersection of cRatSetOne and cRatSetTwo and store
  // that intersection in cRatSetIntersection

  cRatSetIntersection = cRatSetOne.intersection(cRatSetTwo);

  // print cRatSetIntersection

  cout << "Intersection " << endl;
  cRatSetIntersection.print(cout);
  cout << "\n\n";

  // check if cRationalThree isIn cRatSetIntersection
  // print either YES or NO.

  if (cRatSetIntersection.isIn(cRationalThree)) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }

  return 0;
}
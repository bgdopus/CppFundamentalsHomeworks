//============================================================================
// Name        : UnitTestofReverseNumber.cpp
// Author      : Daniel Georiev
// Version     :
// Copyright   : Your copyright notice
// Description : Unit test for reverse number
//============================================================================

#include <iostream>
#include <string>

using namespace std;

bool CheckReversedNumber(int actualResult, int expectedResult)
{
	if (actualResult == expectedResult)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int ReverseNumber(int number)
{
	int reverse = 0;

	while(number!= 0)
	{
		reverse = reverse * 10;
		reverse = reverse + number%10;
		number = number/10;
	}
	return reverse;
}

int main() {

	int a = 1;
	int b = 12;
	int c = 123;
	int d = 1234;
	int e = 12345;

	bool hasPassed = false;

	int aReversed = ReverseNumber(a);
	hasPassed = CheckReversedNumber(aReversed, 1);
	if(!hasPassed)
	{
		cout << "Error with:" << a << endl;
	}

	int bReversed = ReverseNumber(b);
	hasPassed = CheckReversedNumber(bReversed, 21);
	if(!hasPassed)
	{
		cout << "Error with:" << b << endl;
	}

	int cReversed = ReverseNumber(c);
	hasPassed = CheckReversedNumber(cReversed, 321);
	if(!hasPassed)
	{
		cout << "Error with:" << c << endl;
	}

	int dReversed = ReverseNumber(d);
	hasPassed = CheckReversedNumber(dReversed, 4321);
	if(!hasPassed)
	{
		cout << "Error with:" << d << endl;
	}

	int eReversed = ReverseNumber(e);
	hasPassed = CheckReversedNumber(eReversed, 54321);
	if(!hasPassed)
	{
		cout << "Error with:" << e << endl;
	}

	return 0;
}

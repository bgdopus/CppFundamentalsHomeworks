//============================================================================
// Name        : TrailingZerosInNFactorial.cpp
// Author      : Daniel Georiev
// Version     :
// Copyright   : Your copyright notice
// Description : Write a program that calculates for given N how many trailing zeros present at the end of the number N!.
//============================================================================

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	long long int product = 1;
	for (int i = 1; i <= n; i++)
	{
		product *= i;
	}

	int counter = 0;
	while (product > 0)
	{
	    int digit = product % 10;
	    if( digit == 0)
	    {
	    	counter++;
	    }

	    product /= 10;
	}

	cout << counter << endl; // prints !!!Hello World!!!
	return 0;
}

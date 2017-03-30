//============================================================================
// Name        : FiboWithRecursion.cpp
// Author      : Daniel Georiev
// Version     :
// Copyright   : Your copyright notice
// Description : Fibonacci numbers with recursion
//============================================================================

#include <iostream>
using namespace std;
int GetFiboNum(int a, int result)
{
	if (a == 0)
	{
	    return result;
	}

	result *= a;


  return GetFiboNum(a-1, result);
}

int main() {
	long int fiboN = GetFiboNum(10, 1);
	cout << fiboN << endl; // prints !!!Hello World!!!
	return 0;
}

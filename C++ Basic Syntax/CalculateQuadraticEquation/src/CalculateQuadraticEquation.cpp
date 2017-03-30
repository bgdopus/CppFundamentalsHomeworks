//============================================================================
// Name        : CalculateQuadraticEquation.cpp
// Author      : Daniel Georiev
// Version     :
// Copyright   : Your copyright notice
// Description : Find real roots of quadratic equation
//============================================================================

#include <iostream>
#include <math.h>       /* sqrt */

using namespace std;

int main() {
	int a = 1;
	int b = 3;
	int c = -4;

	double d = (b*b) - (4*a*c);

	if(d > 0)
	{
		double x1 = (-b + sqrt(d))/(2*a);
		double x2 = (-b - sqrt(d))/(2*a);
		cout << x1 << endl;
		cout << x2 << endl;
	}
	else if(d == 0)
	{
		double x = -(b/(2*a));
		cout << x << endl;
	}
	else
	{
		cout << "No real roots" << endl;
	}

	return 0;
}

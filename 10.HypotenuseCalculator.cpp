#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	/*
		Create the variables
	*/

	double a;
	double b;
	double c;

	/*
		Ask for input
	*/

	cout << "Enter side A: ";
	cin >> a;
	cout << "Enter side B: ";
	cin >> b;

	/*
		Math formula
	*/

	a = pow(a, 2);
	b = pow(b, 2);
	c = sqrt(a + b);

	//Output
	cout << "Side C: " << c;

	return 0;
}

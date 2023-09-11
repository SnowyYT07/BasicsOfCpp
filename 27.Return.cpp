#include <iostream>

double multiply(double value1, double value2)
{
	// double result = value1 * value 2; this can be used too
	return value1 * value2;
}

int main()
{
	double v1 = 5.0;
	double v2 = 3.21;
	double result = multiply(v1,v2);

	std::cout << "result is : " << result;
	return 0;

}

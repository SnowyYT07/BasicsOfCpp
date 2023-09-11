#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	char op;
	double a;
	double b;
	double result;

	cout << "\n\n***********Basic Calculator***********\n";
	cout << "Enter one option (+ - * /): ";
	cin >> op;

	cout << "Enter num #1: ";
	cin >> a;
	cout << "Enter num #2: ";
	cin >> b;

	switch(op){
		case '+':
			result = a + b;
		cout << "Result is: " << result;
		break;

		case '-':
			result = a - b;
		cout << "Result is: " << result;
		break;

		case '*':
			result = a * b;
		cout << "Result is: " << result;
		break;

		case '/':
			result = a / b;
		cout << "Result is: " << result;
		break;

		default:
		cout << "\nCant make the operation if you dont choose the right operators\n";
		cout << "Choose one of this 4 options (+ - * /)\n";
		main();
	}

	return 0;
}

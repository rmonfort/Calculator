#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

double caculate_expression(const double& number1, const double& number2, const char& operation)
{
	switch (operation)
	{
	case '+':
		return number1 + number2;
		break;
	case '-':
		return number1 - number2;
		break;
	case '*':
		return number1 * number2;
		break;
	case '/':
		return number1 / number2;
		break;
	default:
		break;
	}
}
int main()
{
	cout << "Please enter an simple expression (i.e. 1+2, 1-2, 1*3, or 1/4): " << endl;
	double number1;
	char operation;
	double number2;
	cin >> number1 >> operation >> number2;
	cout << caculate_expression(number1, number2, operation) << endl;
	return 0;
}
/*
To Do:
Implement stacks to allow for multiple expressions
Implement scientific calculator functions
Implement a gui through qt framework
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "Please enter an expression: " << endl;
	double number1;
	double number2;
	char operation;
	cin >> number1 >> operation >> number2;

	switch (operation)
	{
	case '+':
		cout << number1 + number2 << endl;
		break;
	case '-':
		cout << number1 - number2 << endl;
		break;
	case '*':
		cout << number1 * number2 << endl;
		break;
	case '/':
		cout << number1 / number2 << endl;
		break;
	default:
		break;
	}
	return 0;
}
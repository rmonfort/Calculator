/*
To Do:
Implement shunting-yard algorithm 
*/
#include <iostream>
#include <string>
#include <stack>
#include <queue>

using std::cin;
using std::cout;
using std::endl;
using std::stack;
using std::queue;

int main()
{
	cout << "Please enter an expression: " << endl;
	int number1;
	char operation;
	int number2;
	cin >> number1 >> operation >> number2;
	queue<int> number_queue;
	number_queue.push(number1);
	number_queue.push(number2);
	stack<char> operator_stack;
	operator_stack.push(operation);
	cout << number_queue.front() << " ";
	number_queue.pop();
	cout << number_queue.front() << " ";
	number_queue.pop();
	cout << operator_stack.top() << endl;
	operator_stack.pop();
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	double num1;
	double num2;
	int operation;
	cout << "введите первое число" << endl;
	cin >> num1;
	cout << "введите второе число" << endl;
	cin >> num2;
	cout << "что вы хотите сделать? *,/,+,-" << endl;
	cin >> operation;
	if (operation == '+')
	{
		cout << "результат вашего сложения = 10" << endl;
	}
	else if (operation == '-')
	{
		cout << "результат вашего вычитания = 10" << endl;
	}
	else if (operation == '*')
	{
		cout << "результат вашего умножения = 10" << endl;
	}
	else if (operation == '*')
	{
		cout << "результат вашего деления = 10" << endl;
	}
}
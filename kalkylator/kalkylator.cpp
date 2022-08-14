#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

	double a, b;
	int	selection;
	cout << "Введите 2 числа" << '\n';
	cin >> a >> b;

	cout << "Выберите математическую операцию" << '\n' <<
		  '\n' << "1. Сложение" << '\n' <<
		  '\n' << "2. Вычитание" << '\n' <<
		  '\n' << "3. Умножение" << '\n' <<
		  '\n' << "4. Деление" << '\n';
	cin >> selection;


	switch (selection)
	{
	case 1:
		cout << "Сумма = " << a + b << '\n';
		break;

	case 2:
		cout << "Разность = " << a - b << '\n';
		break;

	case 3:
		cout << "Произведение = "<< a * b << '\n';
		break;

	case 4:
		if (a > 0 && b > 0)
		{
			cout << '\n' << "частное = " << a / b << '\n';
		}
		else if (a == 0 && b > 0)
		{
			cout << '\n' << "0" << '\n';
		}
		else
		{
			cout << '\n' << "На ноль делить нельзя" << '\n';
		}

		break;
		
	default:
		cout << "Введенной команды не существует!" << '\n';
		break;

		// у льва 
	}
}
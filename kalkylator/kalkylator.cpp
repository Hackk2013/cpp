#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

	double result, temp, result1 ; 
	int	menu;
	bool isStart=true;

	cout << "Введите  число" << '\n';
	cin >> result;
	

	while (isStart)
	{ 
		cout << "Выберите математическую операцию" << '\n' <<
			'\n' << "1. Сложение"  << '\n' <<
			'\n' << "2. Вычитание" << '\n' <<
			'\n' << "3. Умножение" << '\n' <<
			'\n' << "4. Деление"   << '\n' <<
			'\n' << "5. Процент"   << '\n' <<
			'\n' << "0. Выход"     << '\n'<<
		    '\n';
		cin  >> menu;

		if (menu != 0)
		{
			cout << "Введите число" << '\n';
			cin >> temp;

			switch (menu)
			{
			case 1:
				result += temp;

				cout << "Сумма = " << result << '\n';
				break;

			case 2:
				result -= temp;
				cout << "Разность = " << result << '\n';
				break;

			case 3:
				result *= temp;
				cout << "Произведение = " << result << '\n';
				break;

			case 4:
				if (result != 0 && temp != 0)
				{
					result /= temp;
					cout << '\n' << "частное = " << result << '\n';
				}
				else if (result == 0 && temp > 0)
				{
					cout << '\n' << "0" << '\n';
				}
				else
				{
					cout << '\n' << "На ноль делить нельзя" << '\n';
				}
				break;

			case 5:
				result1 = result;
				result = 100 * temp / result;
				cout << '\n'<< temp<< " Это " << result <<" % от "<< result1 << '\n';
				break;

			default:
				cout << "Введенной команды не существует!" << '\n';
				break;
			}
		}
		else
		{
			isStart = false;
		}
	}
}
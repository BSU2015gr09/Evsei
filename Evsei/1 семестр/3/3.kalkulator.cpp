//"Нормальный" калькулятор.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	setlocale(LC_ALL, "Russian");
	int k = 0, n = 1;
	float rez = 0;
	char oper, c, e;
	while (n == 1)
	{
		n++;
		cout << "Введите первое число" << endl;
		cin >> rez;
		cout << "Введите операцию" << endl;
		cin >> oper;
		switch (oper)
		{
		case 'c'://Происходит сброс всех значений при вводе "c".
			n = 1;
			break;
		case 'e'://Происходит выход из программы при вводе "e".
			n = 3;
			break;
		}
		while (n == 2)
		{
			cout << "Введите второе число" << endl;
			cin >> k;
			switch (oper)
			{
			case '+':
				rez = rez + k;
				cout << "Результат = " << rez << endl;
				break;
			case '-':
				rez = rez - k;
				cout << "Результат = " << rez << endl;
				break;
			case '*':
				rez = rez * k;
				cout << "Результат = " << rez << endl;
				break;
			case '/':
				switch (int(k))// зачем приведение типа?
				{
				case 0:
					cout << "Выражение не имеет смысла.(при делении на ноль)" << endl;
					break;
				default:
					rez = rez / k;
					cout << "Результат = " << rez << endl;
					break;
				}
				break;
			case 'c':
				n = 1;
				break;
			case 'e':
				n = 3;
				break;
			}
			switch (int(n))// зачем приведение типа?
			{
			case 2:
				cout << "Введите операцию" << endl;
				cin >> oper;
				switch (oper)
				{
				case 'c':
					n = 1;
					break;
				case 'e':
					n = 3;
					break;
				}
				break;
			default:
				break;
			}
		}
	}
	return 0;
}

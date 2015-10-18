//Программа решает квадратное уравнение
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::sqrt;
int main() {
	setlocale(LC_ALL, "Russian");
	int a = 1, b = 0, c = 0;
	float D = 0, x1 = 0, x2 = 0, x = 0, y = 0;
	cout << "Введите число а" << ' ';
	cin >> a;
	cout << "Введите число b" << ' ';
	cin >> b;
	cout << "Введите число c" << ' ';
	cin >> c;
	y = a*x*x + b*x + c;
	y = 0;
	if (D >= 0){
		D = b*b - 4 * a*c;
	}
	cout << "D=" << D << endl;

	if (D >=0){
		cout <<"Уравнение имеет два корня"<< '\n';
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "x1 = " << x1 << "\n";
		cout << "x2 = " << x2 << "\n";
	}
	if (D < 0){
		cout << " Уравнение не имеет решения" << '\n';
	}
	return 0;
}
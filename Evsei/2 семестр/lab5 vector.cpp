#include <iostream>
#include <math.h>
using namespace std;
//класс vect
class vect {
private:
	double x, y;
public:
	//Конструктор
	vect(double = 0, double = 0);

	//Сложение
	vect operator+(const vect &) const;
	
	//Вычитание
	vect operator-(const vect &) const;
	
	//Умножение вектора на вектор
	vect operator*(const vect &);
	
	//Умножение скаляра на вектор
	vect operator*(const double &);
	
	//Печать
	void print () const;

	~vect ()
	{
		cout << "Тут сработал деструктор" << endl;
	}
};

//Конструктор:
vect::vect(double x1, double y1)
{
	cout << endl;
	cout << "Работает конструктор" << endl;
	x = x1;
	y = y1;
}

//операция сложения:
vect vect::operator+(const vect &oper) const
{
	vect sum;
	sum.x = x + oper.x;
	sum.y = y + oper.y;
	return sum;
}

//операция вычитания:
vect vect::operator-(const vect &oper) const
{
	vect diff;
	diff.x = x - oper.x;
	diff.y = y - oper.y;
	return diff;
}

//операция умножения вектора на вектор:
vect vect::operator*(const vect &oper)
{
	vect v_proizv;
	v_proizv.x = x * oper.x;
	v_proizv.y = y * oper.y;
	return v_proizv;
}

//oперация умножения:
vect vect::operator*(const double &oper)
{
	vect proizv;
	proizv.x = x * oper;
	proizv.y = y * oper;
	return proizv;
}

//Печать объекта в виде (a,b)
void vect::print() const
{
	cout << '(' << x << ", " << y << ')';
}


int main ()
{
	setlocale(LC_ALL, "Russian");
	double i1, j1, i2, j2;

	//вектор 1
	cout << "Введите координаты вектора v1 ";
	cin >> i1; cin >> j1;
	vect x1(i1, j1);

	//вектор 2
	cout << "Введите координаты вектора v2 ";
	cin >> i2; cin >> j2;
	vect y1(i2, j2);

	vect z;
	
	cout << " Вектор 1: ";
	x1.print ();
	cout << endl;

	cout << " Вектор 2: ";
	y1.print ();
	cout << endl;
	
	z = x1 + y1;
	cout << " Сложение векторов: ";
	z.print ();
	cout << endl;
	
	z = x1 - y1;
	cout << " Вычитание векторов: ";
	z.print ();
	cout << endl;
	
	z = x1 * y1;
	cout << " Умножение векторa v1 на вектор v2: ";
	z.print ();
	cout << endl;
	
	double scl;
	cout << "\n Введите значение скаляра, для умножения:  "  ; cin >> scl;
	cout << endl;
	
	z = x1 * scl;
	cout << " Умножение вектора1 на скаляр: ";
	z.print ();
	cout << endl;
	
	z = y1 * scl;
	cout << " Умножение вектора2 на скаляр: ";
	z.print ();
	cout << endl;

	//system("pause");
	return 0;
}
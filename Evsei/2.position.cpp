//Ввести целое число,вывести наибольшую цифру и на какой оно позиции
#include <iostream>
#include <clocale>
using std::cin;
using std::cout;
using std::endl;
int main(){
	setlocale(LC_ALL, "Russian");
	int n = 0, max=0, n1 = 0, a= 0, i = 1;
	cout << "Введите число" << endl;
	cin >> n;
	n1 = n;//отлично выбранное имя для переменной !!!!
	    while (n1>0){
		a= n1 % 10;
		if (a > max){
			max = a;
		}
		n1 = n1 / 10;
	}
	cout << "Цифра " << max<< " наибольшая в числе. Стоит на ";
	while (n>0){
		a= n % 10;
		if (a==max){
			cout << i << "  ";
		}
		i++; //отлично выбранное имя для переменной !!!!
		n = n / 10;
	}
	cout << "позиции" << '\n';
	return 0;
}

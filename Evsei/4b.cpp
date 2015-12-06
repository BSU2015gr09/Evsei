#include <iostream>
#include <clocale>
//Объявить массив вещественных чисел размера N (число N объявить как константу равную нескольким десятков тысяч). Проинициализировать значения элементов массива случайными числами из промежутка от -50 до 50.
using std::cin;
using std::cout;
using std::endl;
int xorshift128(int x){
	int t;
	int a = 13, b = 15, c = 5;
	t = x ^ (x << a);
	t = t ^ (t >> b);
	return x = x ^ (t << c);
}
//инитиализация массива
void initialize(int mas[], int N){
	mas[0] = 5;
	for (int i = 1; i<N; i++){
		mas[i] = xorshift128(mas[i - 1]);
	}
	for (int i = 1; i<N; i++){
		mas[i] = mas[i] % 51;
	}
}
//вывод в обратном порядке
void couut(int mas[], int N) {
	for (int i = N; i >= 0; i--){
		cout << mas[i] << endl;
	}
}
//вывод чётных потом нечтёных элементов 
void chetnechet(int mas[], int N){
	cout << "Нечётные элементы массива:";
	for (int i = 1; i<N; i += 2){
		cout << mas[i] << "  ";
	}
	cout << "Чётные элементы массива:";
	for (int i = 0; i<N; i += 2){
		cout << mas[i] << "  ";
	}
	cout << "" << endl;
}
//вывод кол-ва положительных и отрицательных эелементов масива
void polotr(int mas[], int N){
	int pol = 0, otr = 0;
	for (int i = 0; i<N; i++){
		if (mas[i] >= 0){
			pol++;
		}
		else {
			otr++;
		}
	}
	cout << "Кол-во положительных элементов:=" << pol << endl;
	cout << "Кол-во отрицательных элементов:=" << otr << endl;
}
//вывод максимума и минимума
void mxmn(int mas[], int N){
	int mx, mn;
	mx = mas[0];
	mn = mas[0];
	for (int i = 0; i<N; i++){
		if (mas[i]>mx){
			mx = mas[i];
		}
		if (mas[i]<mn){
			mn = mas[i];
		}
	}
	cout << "максиальный элемент масива равен:=" << mx << endl;
	cout << " минмальный элемент масива равен:=" << mn << endl;
}
//вывод количества максимальных и минимальных эелементов 
void kolvomxmn(int mas[], int N){
	int j = 0, g = 0, mx, mn;
	mx = mas[0];
	mn = mas[0];
	for (int i = 0; i<N; i++){
		if (mas[i] == mx){
			g++;
		}
		if (mas[i]>mx){
			mx = mas[i];
			g = 1;
		}
		if (mas[i] == mn){
			j++;
		}
		if (mas[i]<mn){
			mn = mas[i];
			j = 1;
		}
	}
	cout << "Кол-во максимальных элементов:=" << g << endl;
	cout << "Кол-во минимальных элементов:=" << j << endl;
}
//"Перестроить" массив следующим образом :заполнить вспомогательный массив В в котором положительные значения массива А переместить в начало В, отрицательные переместить в конец массива В
void perestroyka(int masB[], int mas[], int N){
	int j = 0;
	int k = N - 1;
	for (int i = 0; i<N; i++){
		if (mas[i] >= 0){
			masB[j] = mas[i];
			j++;
		}
		else {
			masB[k] = mas[i];
			k--;
		}
	}
}
//"перестроить" массив А "на месте" (т.е. БЕЗ использования массива В) следующим образом положительные значения массива А переместить в начало А, отрицательные переместить в конец массива А.
void perestroykaB(int mas[], int N){
	int c;
	int j = N;
	for (int i = 0; i<N; i++){
		if (mas[i]<0){
			for (j = N; j>i; j--){
				if (mas[j] >= 0){
					c = mas[i];
					mas[i] = mas[j];
					mas[j] = c;
				}
			}
		}
	}
}
int main(){
	const int N = 22563;
	setlocale(LC_ALL, "Russian");
	int mas[N];
	initialize(mas, N);
	couut(mas, N);
	chetnechet(mas, N);
	polotr(mas, N);
	mxmn(mas, N);
	kolvomxmn(mas, N);
	int B = N;
	int mas B[B];
	perestroyka(mas[B], mas, N);
	perestroykaB(mas, N);
	return 0;
}
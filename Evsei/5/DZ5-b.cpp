#include <iostream>
#include <stdlib.h>
using namespace std;

//печать массива
void initArray(int[], int);
void printArray(int[], int);

//функция возвращает первый индекс, если таких чисел несколько, и - 1 если такого числа нет.
int findValue(int array[], int N, int value);

const int N = 10;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[N], value;;
	cout << "Заполните массив" << endl;
	initArray(array, N);
	cout << "Введите число для поиска" << endl;
	cin >> value;
	int valueIndex = findValue(array, N, value);
	if (valueIndex == -1){
		cout << "Введенное число не найдено" << endl;
	}else{
 		cout << "Позиция числа равна " << valueIndex << endl;
	}

}

void initArray(int array[], int N)
{
	for (int i = 0; i<N; i++)
	{
		cin >> array[i];
	}
}

void printArray(int array[], int N){
	cout << "**************" << endl;
	for (int i = 0; i < N; i++){
		cout << array[i] << ' ';
	}
	cout << endl << "**************" << endl;

}

int findValue(int array[], int N, int value){
	for (int i = 0; i < N; i++){
		int curValue = array[i];
		if (curValue  ==  value){
			return i;
		}
	}

	return -1;
}
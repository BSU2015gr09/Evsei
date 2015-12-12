#include <iostream>
#include <stdlib.h>
using namespace std;
//инициализация массива массива
void initArray(char[], int);
//печать массива
void printArray(char[], int);
//заменяем последнюю встреченную в массиве букву Z на букву F
void changeZtoF(char[], int);
const int N = 10;
int main()
{
	setlocale(LC_ALL, "Russian");
	char array[N];
	initArray(array, N);
	printArray(array, N);
	//заменяем последнюю встреченную в массиве букву 'Z' на букву 'F'
	changeZtoF(array, N);
	cout << "Новый массив: " << endl;
	printArray(array, N);
}

void initArray(char array[], int N)
{
	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < N; i++){
		cin >> array[i];
	}
}

void printArray(char array[], int N){
	cout << "**************" << endl;
	for (int i = 0; i < N; i++){
		cout << array[i] << ' ';
	}
	cout << endl << "**************" << endl;

}

void changeZtoF(char array[], int){
	for (int i = N-1; i > 0; i--){
		if (array[i] == 'Z' || array[i] == 'z'){
			array[i] = 'F';
			return;
		}
	}
	cout << endl << "Буква Z не была найдена" << endl;
}
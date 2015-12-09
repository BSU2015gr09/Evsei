#include <iostream>
#include <stdlib.h>
using namespace std;

//печать массива
void initArray(int[], int);
void printArray(int[], int);
//удаляем N-ый элемент массива (сдвигая остальные элементы)
void deleteValue(int[], int, int);
const int N = 10;
int main()
{
	setlocale(LC_ALL, "Russian");
	int array[N], n = 0;
	//инициализация массива
	initArray(array, N);
	//печать массива
	printArray(array, N);
	//удаляем N-ый элемент массива (сдвигая остальные элементы)
	deleteValue(array, N, n);
	//печать нового массива
	printArray(array, N);
}

void initArray(int array[], int N)
{
	cout << "введите элементы массива: " << endl;
	for (int i = 0; i < N; i++){
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

void deleteValue(int array[], int N, int n)
{
	while (n<0 || n>N){
	}
	cout << "введите номер элемента, который нужно удалить : ";
	cin >> n;
	for (int i = n; i < N - 1; i++){
		array[i] = array[i + 1];
	}
	array[N - 1] = 0;
	cout << endl;
}
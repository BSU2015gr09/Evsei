#include <iostream>
#include <stdlib.h>
using namespace std;

//печать массива
void initArray(int[], int);
void printArray(int[], int);
//удаляем N-ый элемент массива (сдвигая остальные элементы)
void deleteValue(int[], int& , int);
int readValue();
const int N = 10;
int main()
{
	setlocale(LC_ALL, "Russian");
	int arraySize = N;
	int array[N];
	//инициализация массива
	initArray(array, arraySize);
	//печать массива
	printArray(array, arraySize);
	//удаляем N-ый элемент массива (сдвигая остальные элементы)
	int n = readValue();
	if (n > 0 && n <= N){
		deleteValue(array, arraySize, n);
	}
	else{
		cout << "Позиция должна быть больше 0, но меньше " << N << endl;
	}
	
	//печать нового массива
	printArray(array, arraySize);
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

void deleteValue(int array[], int &N, int n)
{
	for (int i = n-1; i < N - 1; i++){
		array[i] = array[i + 1];
	}
	array[N - 1] = 0;
	N--;
}

int readValue(){
	int n;
	cout << "введите номер элемента, который нужно удалить : " << endl;
	cin >> n;
	return n;
}
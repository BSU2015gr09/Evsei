#include <iostream>
#include <stdlib.h>
using namespace std;

//печать массива
void initArray(int[], int);
void printArray(int[], int);

void cutFirstElement(int [], int &);
void addElement(int[], int &);

const int N = 100;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[N], arraySize;
	cout << "Введите размер массива" << endl;
	cin >> arraySize;
	initArray(array, arraySize);
	cout << "Исходный массив" << endl;
	printArray(array, arraySize);
	
	int limitOperations = 2, countOfOperations = 0;

	while (countOfOperations != limitOperations){
		cutFirstElement(array, arraySize);
		addElement(array, arraySize);
		cout << "Измененный массив" << endl;
		printArray(array, arraySize);
		countOfOperations++;
	}

}

void initArray(int array[], int newSize)
{
	for (int i = 0; i<newSize; i++)
	{
		array[i] = rand() % 20 - 9;
	}
}

void printArray(int array[], int N){
	cout << "**************" << endl;
	for (int i = 0; i < N; i++){
		cout << array[i] << ' ';
	}
	cout << endl << "**************" << endl;

}

void cutFirstElement(int array[], int & arrayZise)
{

	for (int i = 0; i< arrayZise - 1; i++)
	{
		array[i] = array[i + 1];
	}
	
	arrayZise--;
}

void addElement(int array[], int &arrayZise)
{
	int newVal;
	cout << "Dведите число, которое нужно добавить в конец массива " << endl;
	cin >> newVal;
	array[arrayZise] = newVal;
	arrayZise++;
}
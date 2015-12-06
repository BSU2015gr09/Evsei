#include <iostream>
#include <stdlib.h>
using namespace std;

//������ �������
void initArray(int[], int);
void printArray(int[], int);
void bubbleSort(int [], int );

void addElement(int[], int &);

//������� ���������� ������ ������, ���� ����� ����� ���������, � - 1 ���� ������ ����� ���.
int findValue(int [], int , int );
void removeElement(int [], int &, int );
const int N = 100;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[N], arraySize, valueForFind;
	cout << "������� ������ �������" << endl;
	cin >> arraySize;
	initArray(array, arraySize);
	cout << "�������� ������" << endl;
	printArray(array, arraySize);
	
	addElement(array, arraySize);
	bubbleSort(array, arraySize);
	cout << "������� ������� ������� �� ������ �����" << endl;
	cin >> valueForFind;
	
	int valueIndex = findValue(array, arraySize, valueForFind);
	if (valueIndex == -1){
		cout << "��������� ����� �� �������" << endl;
	}
	else{
		removeElement(array, arraySize, valueIndex);
		cout << "�������� ������" << endl;
		printArray(array, arraySize);
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

void bubbleSort(int array[], int arraySize)
{
	int value;

	for (int i = 0; i < arraySize - 1; ++i) 
	{
		for (int j = 0; j < arraySize - 1; ++j) 
		{
			if (array[j + 1] < array[j])
			{
				value = array[j + 1];
				array[j + 1] = array[j];
				array[j] = value;
			}
		}
	}
}

void addElement(int array[], int &arrayZise)
{
	int newVal;
	cout << "D������ �����, ������� ����� �������� " << endl;
	cin >> newVal;
	array[arrayZise] = newVal;
	arrayZise++;
}

void removeElement(int array[], int & arraySize, int position){
	if (position == (arraySize - 1)){
		arraySize--;
		return;
	}
	for (int i = 0; i < arraySize - 1; i++){
		if (i >= position){
			array[i] = array[i + 1];
		}
	}
	arraySize--;
}

int findValue(int array[], int N, int value){
	for (int i = 0; i < N; i++){
		int curValue = array[i];
		if (curValue == value){
			return i;
		}
	}

	return -1;
}
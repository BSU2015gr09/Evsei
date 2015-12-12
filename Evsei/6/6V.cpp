#include <iostream>
#include <stdlib.h>
using namespace std;

//������������� �������
void initArray(char[], int);
//������ �������
void printArray(char[], int);
//���� � ������� ����� ����� ����������� ���� �����
char valueRepeatedGreaterOthers(char[], int);
const int N = 10;
int main()
{
	setlocale(LC_ALL, "Russian");
	char array[N];
	initArray(array, N);
	printArray(array, N);
	//���� � ������� ����� ����� ����������� ���� �����
	char maxChar = valueRepeatedGreaterOthers(array, N);
	cout << "�������� ����� ����������� �����  " << maxChar << endl;
}

void initArray(char array[], int N)
{
	cout << "������� �������� �������: " << endl;
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

char valueRepeatedGreaterOthers(char array[], int N)
{
	int maxChar = array[0];
	int maxCount = 1;
	for (int i = 0; i < N; i++){
		int curCount = 1;
		for (int j = i + 1; j < N; j++){
			if (array[i] == array[j]){
				curCount++;
			}
		}

		if (curCount > maxCount){
			maxCount = curCount;
			maxChar = array[i];
		}

	}
	
	return maxChar;
}
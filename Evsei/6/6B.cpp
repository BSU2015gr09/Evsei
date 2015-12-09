#include <iostream>
#include <stdlib.h>
using namespace std;

//������ �������
void initArray(int[], int);
void printArray(int[], int);
//������� N-�� ������� ������� (������� ��������� ��������)
void deleteValue(int[], int, int);
const int N = 10;
int main()
{
	setlocale(LC_ALL, "Russian");
	int array[N], n = 0;
	//������������� �������
	initArray(array, N);
	//������ �������
	printArray(array, N);
	//������� N-�� ������� ������� (������� ��������� ��������)
	deleteValue(array, N, n);
	//������ ������ �������
	printArray(array, N);
}

void initArray(int array[], int N)
{
	cout << "������� �������� �������: " << endl;
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
	cout << "������� ����� ��������, ������� ����� ������� : ";
	cin >> n;
	for (int i = n; i < N - 1; i++){
		array[i] = array[i + 1];
	}
	array[N - 1] = 0;
	cout << endl;
}
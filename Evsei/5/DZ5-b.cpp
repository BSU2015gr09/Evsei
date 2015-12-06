#include <iostream>
#include <stdlib.h>
using namespace std;

//������ �������
void initArray(int[], int);
void printArray(int[], int);

//������� ���������� ������ ������, ���� ����� ����� ���������, � - 1 ���� ������ ����� ���.
int findValue(int array[], int N, int value);

const int N = 10;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[N], value;;
	cout << "��������� ������" << endl;
	initArray(array, N);
	cout << "������� ����� ��� ������" << endl;
	cin >> value;
	int valueIndex = findValue(array, N, value);
	if (valueIndex == -1){
		cout << "��������� ����� �� �������" << endl;
	}else{
 		cout << "������� ����� ����� " << valueIndex << endl;
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
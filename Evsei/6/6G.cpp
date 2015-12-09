#include <iostream>
#include <stdlib.h>
using namespace std;

//������ �������
void initArray(char[], int);
void printArray(char[], int);
void changeZtoF(char[], int);
const int N = 10;
int main()
{
	setlocale(LC_ALL, "Russian");
	char array[N];
	initArray(array, N);
	printArray(array, N);
	//�������� ��������� ����������� � ������� ����� Z �� ����� F
	changeZtoF(array, N);
	printArray(array, N);
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

void changeZtoF(char array[], int){
	for (int i = N; i > 0; i--){
		if (array[i] == 'z'){
			array[i] = 'f';
			break;
		}
	}
	cout << "����� ������: " << endl;
}
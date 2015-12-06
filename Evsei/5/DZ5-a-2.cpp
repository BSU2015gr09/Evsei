#include <iostream>
#include <stdlib.h>
using namespace std;


const int N = 5;
const int M = 5;

void initArray(int[][M], int, int);
void printArray(int [][M], int, int);
//����� �������� ����� ���� ��� ��� ����. �������� ������ ���������� ������� ������� ������� �������� ��������� � ������ � ���������� � �������.

//������� ����� ��������� ������� ��������� �������(N = M)
void sumOfMainDiagonal(int array[][M], int N);
//������� ����� ��������� ������� ������������ �������(N = M)
void sumOFFooterTriangle(int array[][M], int N);


int main()
{
	setlocale(LC_ALL, "Russian");
	int array[N][M];
	initArray(array, N, M);
	printArray(array, N, M);
	//������� ����� ��������� ������� ��������� �������(N = M)
	sumOfMainDiagonal(array, N);
	//������� ����� ��������� ������� ������������ �������(N = M)
	sumOFFooterTriangle(array, N);
}

void initArray(int array[][M], int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j<N; j++)
		{
			array[i][j] = rand() % 10 - 4;
		}
	}
}

void printArray(int array[][M], int N, int M)
{
	cout << "**************" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl << endl;
	}

	cout << endl << "**************" << endl;
}




void sumOfMainDiagonal(int array[][M], int N)
{
	int sum = 0;
	for (int i = 0; i<N; i++)
	{
		sum += array[i][i];
	}
	cout << "C���� ������� ��������� ����� " << sum << endl;
}
void sumOFFooterTriangle(int array[][M], int N)
{
	int sum = 0;
	for (int i = 0; i<N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sum += array[i][j];
		}
	}
	cout << "����� ������� ������������ �������� ��������� ����� " << sum << endl;
}


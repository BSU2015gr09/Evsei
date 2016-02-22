#include <iostream>
#include <stdlib.h>
using namespace std;


const int N = 5;
const int M = 5;

void initArray(int[][M], int, int);
void printArray(int [][M], int, int);
//найти седловую точку если она там есть. Седловой точкой называется элемент матрицы который является минимумом в строке и максимумом в столбце.
void findSedlPoint(int array[][M], int);
//Вывести сумму элементов главной диагонали матрицы(N = M)
void sumOfMainDiagonal(int array[][M], int );
//Вывести сумму элементов нижнего треугольника матрицы(N = M)
void sumOFFooterTriangle(int array[][M], int);


int main()
{
	setlocale(LC_ALL, "Russian");
	int array[N][M];
	initArray(array, N, M);
	printArray(array, N, M);
	//найти седловую точку если она там есть.
	findSedlPoint(array, N);
	//Вывести сумму элементов главной диагонали матрицы(N = M)
	sumOfMainDiagonal(array, N);
	//Вывести сумму элементов нижнего треугольника матрицы(N = M)
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
	cout << "Cумма главной диагонали равна " << sum << endl;
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
	cout << "сумма нижнего треугольника исключая диагональ равна " << sum << endl;
}

void findSedlPoint(int array[][M], int N)
{
	bool foundSedlPoint = false;
	for (int i = 0; i < N; i++){
		
		//Находим минимальный элемент в i строке
		int minValueInRow = array[i][0];
		int minPozInRow = 0;
		for (int j = 0; j < M; j++){
			if (array[i][j] < minValueInRow){
				minValueInRow = array[i][j];
				minPozInRow = j;
			}
		}

		//Находим максимальный элемент в minPozInRow стобце
		int maxValueInCol = array[i][minPozInRow];
		bool foundGreater = false;
		for (int k = 0; k < N; k++){
			if (array[k][minPozInRow] > maxValueInCol){
				foundGreater = true;
				break;
			}
		}

		if (!foundGreater){
			foundSedlPoint = true;
			cout << "Седловая точка была найдена в " << i << " строке, в " << minPozInRow << " стоблце. Число:" << array[i][minPozInRow] << endl;
		}
	}

	if (!foundSedlPoint){
		cout << "Седловых точек не было найдено"<< endl;
	}
}


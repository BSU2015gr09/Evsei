#include <iostream>
#include <stdlib.h>
using namespace std;

int findMaxValue(int[], int);
int findMinValue(int[], int);
//������ ������������� ������� � ��������� ������������� ������� ����������� �������.
void shiftPositiveAndNegative(int[], int);

//��� ������ �������� �������� ������������ ���������, � �������� � �����������.
void updateEvenOddByMaxMin(int[], int);
//������������ �� ���������, ������������� ������ ���� ���.
void findOneMaxValue(int[], int);
int findMaxValueNotGreaterPrevMaxValue(int array[], int N, int prevMaxValue);
//����� ����������� �� �����, ������������� ����� ������ ����.
void findFewMinValues(int[], int);
int findMinValueGreaterPrevMinValue(int array[], int N, int prevMinValue);
//���������� ������������ ����� ������������������ ������ ���������.
void maxLengthOfSameElements(int array[], int N);

//������ �������
void initArray(int[], int);
void printArray(int[], int);
const int N = 10;
int main()
{
	setlocale(LC_ALL, "Russian");
	int array[N];
	initArray(array, N);
	cout << "������ ������������� ������� � ��������� ������������� ������� ����������� �������." << endl;
	printArray(array, N);
	shiftPositiveAndNegative(array, N);
	cout << endl;
	cout << "��� ������ �������� �������� ������������ ���������, � �������� � �����������." << endl;
	printArray(array, N);
	updateEvenOddByMaxMin(array, N);
	cout << endl;
	cout << "������������ �� ���������, ������������� ������ ���� ���." << endl;
	printArray(array, N);
	findOneMaxValue(array, N);
	cout << "����������� �� ���������, ������������� ����� ������ ����." << endl;
	printArray(array, N);
	findFewMinValues(array, N);
	cout << "������������ ����� ������������������ ������ ���������." << endl;
	printArray(array, N);
	maxLengthOfSameElements(array, N);

}

void initArray(int array[], int N)
{
	for (int i = 0; i<N; i++)
	{
		array[i] = rand() % 50 - 25;
	}
}

void printArray(int array[], int N){
	cout << "**************" << endl;
	for (int i = 0; i < N; i++){
		cout << array[i] << ' ';
	}
	cout << endl << "**************" << endl;

}

void shiftPositiveAndNegative(int array[], int N){
	int pozPositive = -1;
	int pozNegative = -1;
	for (int i = 0; i < N; i++){
		int curValue = array[i];
		if (curValue > 0 && pozPositive < 0){
			pozPositive = i;
		}
		else if (curValue < 0){
			pozNegative = i;
		}

	}

	if (pozPositive < 0 || pozNegative < 0){
		cout << endl << "��� ������������� ��� ������������� ���������" << endl;
	}
	else{
		int tempVal = array[pozPositive];
		array[pozPositive] = array[pozNegative];
		array[pozNegative] = tempVal;
		printArray(array, N);
	}

}


void updateEvenOddByMaxMin(int array[], int N){
	int maxValue = findMaxValue(array, N);
	int minValue = findMinValue(array, N);
	
	for (int i = 0; i < N; i++){
		int curValue = array[i];
		if (curValue % 2 == 0){
			array[i] = maxValue;
		}
		else {
			array[i] = minValue;
		}
	}
	printArray(array, N);
}

void findOneMaxValue(int array[], int N){
	int count = 0;
	int curMaxValue = findMaxValue(array, N);
	int limit = 0;
	while (count != 1)
	{
		
		for (int i = 0; i < N; i++){
			if (array[i] == curMaxValue){
				count++;
			}
			if (count == 2){
				count = 0;
				curMaxValue = findMaxValueNotGreaterPrevMaxValue(array, N, curMaxValue);
				break;
			}
		}

		if (limit == N){
			break;
		}
		else{
			limit++;
		}
	}

	if (count != 1){
		cout << "����� ������� �� ������" << endl;
	}else{
		cout << "������������ ������� = " << curMaxValue  << endl;
	}
	
}

void findFewMinValues(int array[], int N){
	int count = 0;
	int curMinValue = findMinValue(array, N);
	int limit = 0;
	while (count <= 1)
	{
		for (int i = 0; i < N; i++){
			if (array[i] == curMinValue){
				count++;
			}
			if (count > 1){
				break;
			}
			
		}
		
		if (count > 1 || limit == N){
			break;
		}
		else{
			count = 0;
			curMinValue = findMinValueGreaterPrevMinValue(array, N, curMinValue);
			limit++;
		}
	}

	if (count <= 1){
		cout << "����� ������� �� ������" << endl;
	}
	else{
		cout << "����������� ������� = " << curMinValue << endl;
	}

}

int findMaxValue(int array[], int N){
	int maxValue = array[0];
	for (int i = 0; i < N; i++){
		int curValue = array[i];
		if (curValue > maxValue){
			maxValue = curValue;
		}
	}

	return maxValue;
}

int findMinValue(int array[], int N){
	int minValue = array[0];
	for (int i = 0; i < N; i++){
		int curValue = array[i];
		if (curValue < minValue){
			minValue = curValue;
		}
	}
	return minValue;
}

int findMaxValueNotGreaterPrevMaxValue(int array[], int N, int prevMaxValue){
	bool found = false;
	int maxValue = array[0];
	for (int i = 0; i < N; i++){
		int curValue = array[i];
		if (curValue < prevMaxValue){
			if (!found || (found && curValue > maxValue)){
				maxValue = curValue;
				found = true;
			}
		}
	}

	return maxValue;
}

int findMinValueGreaterPrevMinValue(int array[], int N, int prevMinValue){
	bool found = false;
	int minValue = array[0];
	for (int i = 0; i < N; i++){
		int curValue = array[i];
		if (curValue > prevMinValue){
			if (!found || (found && curValue < minValue)){
				minValue = curValue;
				found = true;
			}
			
		}
	}
	return minValue;
}

void maxLengthOfSameElements(int array[], int N){
	int maxElement = array[0];
	int maxLength = 1;
	for (int i = 0; i < N; i++){
		int curElement = array[i];
		int curLength = 1;
		for (int j = i + 1; j < N; j++){
			if (array[i] == array[j]){
				curLength++;
			}
			else{
				i = j;
				break;
			}
		}

		if (curLength > maxLength){
			maxLength = curLength;
			maxElement = curElement;
		}

	}

	cout << "������������ ����� ������������������ �� " << maxElement << " ��������� ����� " << maxLength << endl;
}





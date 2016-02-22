// №41
//В массив А[N], упорядоченный по возрастанию, вставить k заданных элементов, не нарушая его последовательности.
#include <iostream>  
using namespace std;

int init_array(int *p, int n){
	for (int i = 0; i < n; i++) 
		*(p + i) = rand() % 50;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - 1; j++){
			if (*(p + j) > *(p + j + 1)){
				int z = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = z;
			}
		}
	}
	return 1;
}

int out_array(int *p, int n){
	for (int i = 0; i < n; i++)
		cout << *(p + i) << " ";
	return 1;
}

int arr_two(int *p, int n){
	for (int i = 0; i < n; i++) 
		*(p + i) = rand() % 50;
	return 1;
}

int insert(int *a1, int n, int *a2, int k){
	int m = n + k, j = 0;
	int *a3 = new int[m];
	for (; j < n; j++){
		*(a3 + j) = *(a1 + j);
	}
	for (int i = 0; i < k; j++, i++){
		*(a3 + j) = *(a2 + i);
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < m - 1; j++){
			if (*(a3 + j) > *(a3 + j + 1)){
				int z = *(a3 + j);
				*(a3 + j) = *(a3 + j + 1);
				*(a3 + j + 1) = z;
			}
		}
	}
	cout << "Вставляем следующий массив: ";
	for (int i = 0; i < k; i++)
		cout << *(a2 + i) << " ";
	cout << endl << "Результат: ";
	for (int i = 0; i < m; i++) 
		cout << *(a3 + i) << " ";
	return 1;
}

int main(){
	setlocale(LC_ALL, "Russian");
	int n = 0, k = 0;
	cout << "Введите кол-во элементов в массиве: "; 
	cin >> n;
	int *arr = new int[n], *arr2;

	init_array(arr, n);
	out_array(arr, n);

	cout << endl << "Сколько элементов вставить: ";
	cin >> k;
	int *a2 = new int[k];

	arr_two(a2, k);
	insert(arr, n, a2, k);

	cout << endl;
	system("pause");
} 
//№38 / (7 - 8)
//Упорядочить массивы А(N)  и В(М) по возрастанию и получить упорядоченный массив С(К) 
//путем слияния двух упорядоченных по возрастанию массивов, где К=N+M.

#include <iostream>
#include <clocale>
#include <cstdlib>
#include <time.h>

using namespace std;

//инитиализация масива
void initArray(int* kx, int sizex){
	for (int i = 0; i < sizex; i++){
		*(kx + i) = rand() % 300;
	}
	for (int i = 0; i < sizex; i++){
		int mx = *(kx + i);
		int p = i;
		for (int j = i; j < sizex; j++){
			if (mx>*(kx + j)){ 
				mx = *(kx + j);
				p = j;
			}
		}
		int t = *(kx + i);
		*(kx + i) = *(kx + p);
		*(kx + p) = t;
	}
	for (int i = 0; i < sizex; i++){
		cout << *(kx + i) << " ";
	}
}

//инитиализация массива вручную
void initVvodArray(int* kx, int sizex){
	for (int i = 0; i < sizex; i++){
		cin >> *(kx + i);
	}
	for (int i = 0; i < sizex; i++){
		int mx = *(kx + i);
		int p = i;
		for (int j = i; j < sizex; j++){
			if (mx>*(kx + j)){ 
				mx = *(kx + j); 
				p = j;
			}
		}
		int t = *(kx + i);
		*(kx + i) = *(kx + p);
		*(kx + p) = t;
	}
	cout << "Упорядоченный массив:" << endl;
	for (int i = 0; i < sizex; i++){
		cout  << *(kx + i) << " ";
	}
}

// создание нового массива на основе двух предыдущих
void mergerArray(int* km, int m, int* kn, int n, int* knm, int nm) {
	int q = 0;
	int j = 0;
	for (int i = 0; i < nm; i++){
		if ((q < m) && (j < n)) 
			*(knm + i) = (*(km + q)<*(kn + j)) ? *(km + q++) : *(kn + j++);
		else 
			if (q == m) {
				*(knm + i) = *(kn + j); 
				j++;
			}
		else {
			*(knm + i) = *(km + q);
			q++; 
		}
		cout << *(knm + i) << " ";
	}
}

void menu(int* km, int m, int* kn, int n){
	cout << "Выберите действие: " << endl;
	cout << "1 - Ввод массива вручную" << endl;
	cout << "2 - Автоматическая генерация массива" << endl;

	int a;
	cin >> a;

	if (a == 2){
		srand(time(NULL));
		cout << "Mассив A :" << endl;
		initArray(kn, n);
		cout << endl;
		cout << "Mассив B :" << endl;
		initArray(km, m);
	}
	else {
		cout << endl <<"Вводите первый массив A, который нужно упорядочить" << endl;
		initVvodArray(kn, n);
		cout << endl <<"Вводите второй массив В, который нужно упорядочить" << endl;
		initVvodArray(km, m);
	}
}

int main(){
	setlocale(LC_ALL, "Russian");
	int n, m;

	cout << "Введите размеры массива А и массива В:" << endl;
	cin >> n >> m;

	int *arrn = new int[n], *kn = arrn;
	int *arrm = new int[m], *km = arrm;
	menu(km, m, kn, n);

	int *arrnm = new int[n + m], *knm = arrnm;
	cout << endl <<"Массив С:" << endl;
	mergerArray(km, m, kn, n, knm, n + m);

	delete kn, km, arrm, arrn, arrnm, knm;

	system("pause");
	return 0;
}
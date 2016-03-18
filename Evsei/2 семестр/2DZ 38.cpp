//�38 / (7 - 8)
//����������� ������� �(N)  � �(�) �� ����������� � �������� ������������� ������ �(�) 
//����� ������� ���� ������������� �� ����������� ��������, ��� �=N+M.

#include <iostream>
#include <clocale>
#include <cstdlib>
#include <time.h>

using namespace std;

//������������� ������
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

//������������� ������� �������
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
	cout << "������������� ������:" << endl;
	for (int i = 0; i < sizex; i++){
		cout  << *(kx + i) << " ";
	}
}

// �������� ������ ������� �� ������ ���� ����������
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
	cout << "�������� ��������: " << endl;
	cout << "1 - ���� ������� �������" << endl;
	cout << "2 - �������������� ��������� �������" << endl;

	int a;
	cin >> a;

	if (a == 2){
		srand(time(NULL));
		cout << "M����� A :" << endl;
		initArray(kn, n);
		cout << endl;
		cout << "M����� B :" << endl;
		initArray(km, m);
	}
	else {
		cout << endl <<"������� ������ ������ A, ������� ����� �����������" << endl;
		initVvodArray(kn, n);
		cout << endl <<"������� ������ ������ �, ������� ����� �����������" << endl;
		initVvodArray(km, m);
	}
}

int main(){
	setlocale(LC_ALL, "Russian");
	int n, m;

	cout << "������� ������� ������� � � ������� �:" << endl;
	cin >> n >> m;

	int *arrn = new int[n], *kn = arrn;
	int *arrm = new int[m], *km = arrm;
	menu(km, m, kn, n);

	int *arrnm = new int[n + m], *knm = arrnm;
	cout << endl <<"������ �:" << endl;
	mergerArray(km, m, kn, n, knm, n + m);

	delete kn, km, arrm, arrn, arrnm, knm;

	system("pause");
	return 0;
}
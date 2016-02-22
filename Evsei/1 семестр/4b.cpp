#include <iostream>
#include <clocale>
//�������� ������ ������������ ����� ������� N (����� N �������� ��� ��������� ������ ���������� �������� �����). ������������������� �������� ��������� ������� ���������� ������� �� ���������� �� -50 �� 50.
using std::cin;
using std::cout;
using std::endl;
int xorshift128(int x){
	int t;
	int a = 13, b = 15, c = 5;
	t = x ^ (x << a);
	t = t ^ (t >> b);
	return x = x ^ (t << c);
}
//������������� �������
void initialize(int mas[], int N){
	mas[0] = 5;
	for (int i = 1; i<N; i++){
		mas[i] = xorshift128(mas[i - 1]);
	}
	for (int i = 1; i<N; i++){
		mas[i] = mas[i] % 51;
	}
}
//����� � �������� �������
void couut(int mas[], int N) {
	for (int i = N; i >= 0; i--){
		cout << mas[i] << endl;
	}
}
//����� ������ ����� ������� ��������� 
void chetnechet(int mas[], int N){
	cout << "�������� �������� �������:";
	for (int i = 1; i<N; i += 2){
		cout << mas[i] << "  ";
	}
	cout << "׸���� �������� �������:";
	for (int i = 0; i<N; i += 2){
		cout << mas[i] << "  ";
	}
	cout << "" << endl;
}
//����� ���-�� ������������� � ������������� ���������� ������
void polotr(int mas[], int N){
	int pol = 0, otr = 0;
	for (int i = 0; i<N; i++){
		if (mas[i] >= 0){
			pol++;
		}
		else {
			otr++;
		}
	}
	cout << "���-�� ������������� ���������:=" << pol << endl;
	cout << "���-�� ������������� ���������:=" << otr << endl;
}
//����� ��������� � ��������
void mxmn(int mas[], int N){
	int mx, mn;
	mx = mas[0];
	mn = mas[0];
	for (int i = 0; i<N; i++){
		if (mas[i]>mx){
			mx = mas[i];
		}
		if (mas[i]<mn){
			mn = mas[i];
		}
	}
	cout << "����������� ������� ������ �����:=" << mx << endl;
	cout << " ���������� ������� ������ �����:=" << mn << endl;
}
//����� ���������� ������������ � ����������� ���������� 
void kolvomxmn(int mas[], int N){
	int j = 0, g = 0, mx, mn;
	mx = mas[0];
	mn = mas[0];
	for (int i = 0; i<N; i++){
		if (mas[i] == mx){
			g++;
		}
		if (mas[i]>mx){
			mx = mas[i];
			g = 1;
		}
		if (mas[i] == mn){
			j++;
		}
		if (mas[i]<mn){
			mn = mas[i];
			j = 1;
		}
	}
	cout << "���-�� ������������ ���������:=" << g << endl;
	cout << "���-�� ����������� ���������:=" << j << endl;
}
//"�����������" ������ ��������� ������� :��������� ��������������� ������ � � ������� ������������� �������� ������� � ����������� � ������ �, ������������� ����������� � ����� ������� �
void perestroyka(int masB[], int mas[], int N){
	int j = 0;
	int k = N - 1;
	for (int i = 0; i<N; i++){
		if (mas[i] >= 0){
			masB[j] = mas[i];
			j++;
		}
		else {
			masB[k] = mas[i];
			k--;
		}
	}
}
//"�����������" ������ � "�� �����" (�.�. ��� ������������� ������� �) ��������� ������� ������������� �������� ������� � ����������� � ������ �, ������������� ����������� � ����� ������� �.
void perestroykaB(int mas[], int N){
	int c;
	int j = N;
	for (int i = 0; i<N; i++){
		if (mas[i]<0){
			for (j = N; j>i; j--){
				if (mas[j] >= 0){
					c = mas[i];
					mas[i] = mas[j];
					mas[j] = c;
				}
			}
		}
	}
}
int main(){
	const int N = 22563;
	setlocale(LC_ALL, "Russian");
	int mas[N];
	initialize(mas, N);
	couut(mas, N);
	chetnechet(mas, N);
	polotr(mas, N);
	mxmn(mas, N);
	kolvomxmn(mas, N);
	int B = N;
	int mas B[B];
	perestroyka(mas[B], mas, N);
	perestroykaB(mas, N);
	return 0;
}
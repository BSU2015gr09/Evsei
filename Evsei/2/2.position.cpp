//������ ����� �����,������� ���������� ����� � �� ����� ��� �������
#include <iostream>
#include <clocale>
using std::cin;
using std::cout;
using std::endl;
int main(){
	setlocale(LC_ALL, "Russian");
	int n = 0, max=0, n1 = 0, a= 0, i = 1;
	cout << "������� �����" << endl;
	cin >> n;
	n1 = n;
	    while (n1>0){
		a= n1 % 10;
		if (a > max){
			max = a;
		}
		n1 = n1 / 10;
	}
	cout << "����� " << max<< " ���������� � �����. ����� �� ";
	while (n>0){
		a= n % 10;
		if (a==max){
			cout << i << "  ";
		}
		i++;
		n = n / 10;
	}
	cout << "�������" << '\n';
	return 0;
}
//�������� ����� �� ������� ��������������,��������� ����� �����
#include <iostream>
#include <clocale>
using std::cin;
using std::cout;
using std::endl;
int main(){
	setlocale(LC_ALL, "Russian");
	int n, sum;
	n = 0; sum = 0;
	    while (n >= 0){
		sum = sum + n;
		cout << "����� �����"<<' ';
		cin >> n;
	}
	cout << sum << endl;
	return 0;
}
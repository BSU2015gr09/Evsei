#include <iostream>
#include <clocale>
using std::cin;
using std::cout;
using std::endl;
int main(){
	setlocale(LC_ALL, "Russian");
	const int n = 6;
	int arr[n][n];
	int nm = 1;
		/*����� ��������� ������� ��������� �����-�������:*/
		cout << "����� ��������� ������� ��������� �����-�������:" << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			arr[i][j] = nm;
			cout << arr[i][j] << "\t";
			nm++;
		}
		cout << "\n";
	}
	cout << "����� ��������� ������� ��������� ������-������:" << endl;
		/*����� ��������� ������� ��������� ������-������:*/
		nm = 1;
	for (int i = 0; i < n; i++){
		for (int j = n - 1; j >= 0; j--){
			arr[i][j] = nm;
			nm++;
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << arr[i][j] << "\t";
		}
	cout << "\n";
	}
		/*����� ��������� ������� �������:*/
		nm = 1;
	cout << "����� ��������� ������� �������:" << endl;
	for (int j = 0; j < n; j++){
		if (j % 2 != 0){
			for (int i = n - 1; i >= 0; i--){
				arr[i][j] = nm;
				nm++;
			}
		}
		else{
			for (int i = 0; i < n; i++){
				arr[i][j] = nm;
				nm++;
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
		/*����� ��������� ������� �������� �������:*/
		nm = 1;
	cout << "����� ��������� ������� �������� �������:" << endl;
	for (int i = 0; i < n; i++){
		if (i % 2 != 0){
			for (int j = n - 1; j >= 0; j--){
				arr[i][j] = nm;
				nm++;
			}
		}
		else{
			for (int j = 0; j < n; j++){
				arr[i][j] = nm;
				nm++;
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << arr[i][j] << "\t";
			}
		cout << endl;
	}
}
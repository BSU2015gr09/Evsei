//Ћинейный генератор псевдослучайных чисел
#include <iostream>
 #include <clocale>
using std::cin;
using std::cout;
using std::endl;
int main(){ 
	setlocale(LC_ALL, "Russian");
int mas[17];
int a = 3098, c = 1524872, m = 859043;
mas[0] = 1;
cout << mas[0] << "=:1" << endl;
for (int i = 1; i<17; i++){
	mas[i] = (a*(mas[i - 1]) + c) % m;
	cout << mas[i] << "=:" << i + 1 << endl;
}
return 0;
}
// №37 В строке найти и вывести на экран все слова, в которых буквы упорядочены в порядке, обратном алфавитному(ТОК, zona). 
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <cstring>
#include <clocale> 
#include <fstream>

using namespace std;
//ввод строки
void enterString(char*, short);
//проверяем массив на нужную нам сортировку
bool revAlphOrder(char*);

int main(){
	const int n = 1000;
	setlocale(LC_ALL, "Russian");
	char *str = new char[n];
	//ввод строки
	enterString(str, n);

	char *p = strtok(str, " ,.-;:");
	while (p){
		if (revAlphOrder(p)){
			cout << "Порядок обратный алфавитному у [ " << p << " ]" << endl;
		}
		p = strtok(NULL, " ,.-;:");
	}
	system("pause");
	return 0;
}

//ввод строки
void enterString(char * str, short n){
	int k = 0;
	cout << "Выберите действие:" << endl << "  1. Автоматический ввод строки. " << endl << "  2. Ввод строки вручную. " << endl << "  3. Из текстового файла" << endl;
	cin >> k;
	switch (k){
	case 1: strcpy(str, "Почти весна, чуть-чуть мешает метр снега.");
		cout << str << endl;
		break;
	case 2:
		cout << "Введите строку" << "\n";
		cin.get();
		cin.getline(str, n);
		break;
	default:
		ifstream infile("D:\\text.txt");
		while (!infile.eof()){
			infile.getline(str, n);
		}
		break;
	}
}

//проверяем массив на нужную нам сортировку
bool revAlphOrder(char * str){
	while (*(++str)){
		if (*(str - 1) < *(str))
			return false;
	}
	return true;
}
#include <iostream>
#include <stdlib.h>
using namespace std;

const int MAX_STACK_SIZE = 50;
int array[MAX_STACK_SIZE];
//позиция последнкго помещенного в стек элемента
int top = -1;// использование глобальной переменной?????? для такой простой задачи????

//Поместить число в стек(push)
void push(int);
//Достать элемент из стека (pop)
int pop();
//Распечатать вершину стека (view)
void view();
//Распечатать кол-во элементов в стеке
void printStackSize();// очень странная ф-ция.... Зачем????
int readValue();// очень странная ф-ция.... Зачем????


int main(){
	setlocale(LC_ALL, "Russian");
	//инициализация пустого массива для стека
	array[MAX_STACK_SIZE] = {};
	int curValue;
	
	//Ввести число с кливиатуры.Поместить его в стек(push).
	curValue = readValue();
	push(curValue);
	//Ввести еще число с кливиатуры.Поместить его в стек(push).
	curValue = readValue();
	push(curValue);
	//Ввести еще число с кливиатуры.Поместить его в стек(push).
	curValue = readValue();
	push(curValue);
	//Распечатать вершину стека(view).
	view();
	//Распечатать кол - во элементов в стеке.
	printStackSize();
	//Достать элемент из стека(pop).
	curValue = pop();
	cout << "Метод pop вернул элемент " << curValue << endl;
	//Распечатать новое кол - во элементов в стеке.
	printStackSize();
	//Достать элемент из стека(pop).Вывести его на экран.
	curValue = pop();
	cout << "Метод pop вернул элемент " << curValue << endl;
	//Распечатать новое кол - во элементов в стеке.
	printStackSize();
	//Достать элемент из стека(pop).Вывести его на экран.
	curValue = pop();
	cout << "Метод pop вернул элемент " << curValue << endl;
	//Распечатать новое кол - во элементов в стеке.
	printStackSize();
	//Попробовать достать элемент из стека(pop).Вывести предупреждение.
	pop();
	//Ввести число с кливиатуры.Поместить его в стек(push).
	curValue = readValue();
	push(curValue);
	//Распечатать новое кол - во элементов в стеке.
	printStackSize();
}


void push(int value){
	if ((top+1) < MAX_STACK_SIZE){
		top++;
		array[top] = value;
	}
	else{
		cout << "Превышен лимит стека. Максимальный лимит " << MAX_STACK_SIZE << endl;
	}
}

int pop(){
	if (top >= 0){
		int val = array[top];
		top--;
		return val;
	}
	else{
		cout << "Стек пуст. Добавьте элемент, прежде чем читать из него " << endl;
		return 0;
	}
}

void view(){
	cout << "Вершина стека " << array[top] << endl;
}

//Распечатать кол-во элементов в стеке
void printStackSize(){
	cout << "В стеке содержится " << (top + 1) <<" элементов" << endl;
}
int readValue(){
	int newValue;
	cout << "Введите число "<< endl;
	cin >> newValue;
	return newValue;
}


#include <iostream>
#include <stdlib.h>
using namespace std;

const int MAX_STACK_SIZE = 5;
int array[MAX_STACK_SIZE];
//позиция последнкго помещенного в стек элемента
int top = -1;

//Поместить число в стек(push)
void push(int);
//Достать элемент из стека (pop)
int pop();
//Распечатать вершину стека (view)
void view();
//Распечатать стек
void printArray();
int randomValue();
int readValue();


int main(){
	setlocale(LC_ALL, "Russian");
	//инициализация пустого массива для стека
	array[MAX_STACK_SIZE] = {};
	int curValue, n = MAX_STACK_SIZE;
	
	cout << "В стек будет добавлено  "<< n <<" элементов используя метод pop" << endl;
	for (int i = 0; i < n; i++){
		curValue = randomValue();
		cout << "Добавлено: " << curValue << endl;
		push(curValue);
	}
	curValue = randomValue();
	cout << "Попробуем добавить в заполенный стек элемент  " << curValue << endl;
	cout << "Из стека будет извлечено  " << n << " элементов" << endl;
	for (int i = 0; i < n; i++){
		cout << "Извлечено из стека: " << pop() << endl;
	}
	cout << "Попробуем извлечь еще один элемент из стека"<< endl;
	pop();
	
	curValue = readValue();
	push(curValue);
	
	curValue = readValue();
	push(curValue);

	cout << "Извлечено из стека: " << pop() << endl;
	cout << "Извлечено из стека: " << pop() << endl;
	cout << "Попробуем извлечь еще один элемент из стека" << endl;
	pop();
	
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
int randomValue(){
	return (rand() % 10 + 4);
}

int readValue(){
	int newValue;
	cout << "Введите число которое хотите добавить " << endl;
	cin >> newValue;
	return newValue;
}


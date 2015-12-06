//Игра в кости между человеком и компьютером. Они по очереди кидают по два кубика. Побеждает тот, у кого сумма больше. Кубики нарисовать псевдографикой
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
int main(){
	setlocale(LC_ALL, "Russian");
	int a, b, i, j, c = 3;
	srand(time(NULL));
	while (c != 0)
	{
		cout << "Введите 1, чтобы начать игру. Bведите 0, чтобы выйти из игры." << endl;
		cin >> c;
		cout << "\n";
		switch (int(c))
		{
		case 1:
			cout << "YOUR TURN" << endl;
			a = 1 + (std::rand() % 6);
			switch (int(a))
			{
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "| o     |" << endl;
				cout << "|   o   |" << endl;
				cout << "|     o |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}
			b = 1 + (std::rand() % 6);
			switch (int(b))
			{
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "| o     |" << endl;
				cout << "|   o   |" << endl;
				cout << "|     o |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}
			cout << "\n";
			cout << "MY TURN" << endl;
			i = 1 + (std::rand() % 6);
			switch (int(i)){
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "| o     |" << endl;
				cout << "|   о   |" << endl;
				cout << "|     o |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}
			j = 1 + (std::rand() % 6);
			switch (int(j)){
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "| o     |" << endl;
				cout << "|   о   |" << endl;
				cout << "|     o |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}
			cout << endl;
			if (a + b > i + j){
				cout << "YOU WIN!!!" << endl;
			}
			else if (a + b == i + j){
				cout << "DRAW" << endl;
			}
			else {
				cout << "YOU LOSE!!!" << endl;
				cout << endl;
			}
			break;
		case 0:
			cout << "GAME OVER" << endl;
			break;
		}
	}
	return 0;
}
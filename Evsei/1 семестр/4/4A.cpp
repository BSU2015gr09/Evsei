//���������� ��������� � �������� ��������� �������
#include <iostream>
using namespace std;
int XORShift128(int x) {
	int t;
	int a = 13, b = 15, c = 5;
	t = x ^ (x << a);
	t = t ^ (t >> b);
	return x = x ^ (t << c);
}
int main()
{
	return 0;
}
#include <iostream>
using namespace std;
int N;

int clear(int M)
{
	N = N & M;
	return N;
}

int set(int M)
{
	N = N ^ M;
	return N;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите число от -128 до 127" << endl;
	cin >> N;
	while (N > 127 || N < -128)
	{
		cout << "Пожалуйста, проверьте вводимое число. Оно должно находиться в диапазоне от -128 до 127" << endl;
		cin >> N;
	}
	bool sign = N < 0 ? 1 : 0;
	clear(0377);
	cout << "Реверсировать чётные(0) или нечётные(1) разряды?" << endl;
	bool num;
	cin >> num;
	(!num) ? (set(0125)) : (set(0252));
	(sign) ? (set(037777777400)) : (set(0));
	cout << "Полученное число: " << N << endl;
}

#include <iostream>

void clear(int &N, int M)
{
	N = N & M;
}

void set(int &N, int M)
{
	N = N ^ M;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	int N;
	cout << "Введите число от -128 до 127" << endl;
	cin >> N;
	while (N > 127 || N < -128)
	{
		cout << "Пожалуйста, проверьте вводимое число. Оно должно находиться в диапазоне от -128 до 127";
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

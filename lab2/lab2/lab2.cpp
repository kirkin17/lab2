#include <iostream>
#include "locale.h"
using namespace std;
int main()
{
	//test;
	setlocale(LC_ALL, "rus");
	int n = 0;
	double x, min, max, s = 0, pos = 0;
	bool flag = 0;
	cin >> x;
	min = x;
	max = x;
	while (1)
	{
		if (x == 0) break;
		n++;
		s += x;
		if (x > 0) flag = 1;
		if (flag) pos += x;
		if (x > max) max = x;
		if (x < min) min = x;
		cin >> x;
	}
	if (x = s)
	{
		cout << "Среднее арифметическое: " << s / n << "\n";
		cout << "Максимум: " << max << "\n";
		cout << "Минимум: " << min << "\n";
		cout << "Сумма положительных: " << pos << "\n";
		cout << "Конец.....\n";
	}
	else
	{
		cout << "Ничего не введено\n";
		cout << "Завершение работы\n";
	}
}
// Lab_03_1.cpp
// < Маковського Андрія>
// Лабораторна робота №3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 18

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;
	cout << "x = "; cin >> x;

	A = 13.5-2*x;

	if (x <= -1)
		B = exp(0.4 + x);
	if (-1 < x && x < 1)
		B = 1 - sin(x) * sin(x);
	if (x >= 1)
		B = cos(x) / (1 + sin(x) * sin(x));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	
	if (x <= -1)
		B = exp(0.4 + x);
	else
		if (-1 < x && x < 1)
			B = 1 - sin(x) * sin(x);
		else
			B = cos(x) / (1 + sin(x) * sin(x));
	y = A + B;
	cout << "2) y = " << y << endl;
	
	cin.get();
	return 0;
}
